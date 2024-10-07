#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QGraphicsScene>
#include <QApplication>
#include <QWidget>
#include <QPainter>

const float widthsize = 1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->link1->setRange(1, 100);
    ui->link2->setRange(1, 100);
    ui->link3->setRange(1, 100);

    ui->link1->setValue(1);
    ui->link2->setValue(1);
    ui->link3->setValue(1);

    scene = new QGraphicsScene(this);
    ui->ground->setScene(scene);

    ui->indicate_joint1->setText(QString::number(ui->joint1->value()));
    ui->indicate_joint2->setText(QString::number(ui->joint2->value()));
    ui->indicate_joint3->setText(QString::number(ui->joint3->value()));

    start_x = ui->ground->width() / 2.0;
    start_y = ui->ground->height() / 2.0;
}

MainWindow::joint_pos MainWindow::Draw_frame(float x,float y,int lenght, float angle)
{
    float x1 = x + lenght * cos(angle);
    float y1 = y - lenght * sin(angle);
    QGraphicsLineItem * line1 = new QGraphicsLineItem(x,y,x1,y1);
    line1->setPen(pen);
    scene->addItem(line1);

    float x2 = x + widthsize * cos(angle + M_PI/2.0);
    float y2 = y - widthsize * sin(angle+ M_PI/2.0);
    QGraphicsLineItem * line2 = new QGraphicsLineItem(x,y,x2,y2);
    line2->setPen(pen);
    scene->addItem(line2);

    float x3 = x + widthsize * cos(angle + M_PI/2.0) + lenght * cos(angle);
    float y3 = y - widthsize * sin(angle+ M_PI/2.0) - lenght * sin(angle);
    QGraphicsLineItem * line3 = new QGraphicsLineItem(x2,y2,x3,y3);
    line3->setPen(pen);
    scene->addItem(line3);

    QGraphicsLineItem * line4 = new QGraphicsLineItem(x1,y1,x3,y3);
    line4->setPen(pen);
    scene->addItem(line4);

    joint_pos jointpos;

    jointpos.x = (x1+x3) / 2.0;
    jointpos.y = ((y1+y3) / 2.0) + widthsize / 2.0;

    return jointpos;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::activate_arm()
{
    int lenght_frame1 = ui->link1->value();
    int lenght_frame2 = ui->link2->value();
    int lenght_frame3 = ui->link3->value();

    float angle_frame1 = ((float)ui->joint1->value()) * M_PI / 180.0;
    float angle_frame2 = ((float)ui->joint2->value())* M_PI / 180.0;
    float angle_frame3 = ((float)ui->joint3->value())* M_PI / 180.0;

    scene->clear();
    joint_pos jointpos2 = Draw_frame(start_x,start_y,lenght_frame1,angle_frame1);
    joint_pos jointpos3 = Draw_frame(jointpos2.x,jointpos2.y,lenght_frame2,angle_frame2);
    Draw_frame(jointpos3.x,jointpos3.y,lenght_frame3,angle_frame3);
}



void MainWindow::on_Generatearm_clicked()
{
    MainWindow::activate_arm();
}

void MainWindow::on_joint1_valueChanged(int value)
{
    ui->indicate_joint1->setText(QString::number(value));
    activate_arm();

}


void MainWindow::on_joint2_valueChanged(int value)
{
    ui->indicate_joint2->setText(QString::number(value));
    activate_arm();
}


void MainWindow::on_joint3_valueChanged(int value)
{
    ui->indicate_joint3->setText(QString::number(value));
    activate_arm();
}


void MainWindow::on_Reset_clicked()
{

    ui->link1->setValue(1);
    ui->link2->setValue(1);
    ui->link3->setValue(1);
    ui->joint1->setValue(0);
    ui->joint2->setValue(0);
    ui->joint3->setValue(0);

    scene->clear();

    ui->indicate_joint1->setText(QString::number(ui->joint1->value()));
    ui->indicate_joint2->setText(QString::number(ui->joint2->value()));
    ui->indicate_joint3->setText(QString::number(ui->joint3->value()));
}


