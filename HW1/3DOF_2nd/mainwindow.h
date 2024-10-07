#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QPen>
#include <qmath.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    struct joint_pos
    {
        float x;

        float y;
    };

    joint_pos Draw_frame(float x,float y , int lenght, float angle);

    QGraphicsScene* scene;

    int start_x;
    int start_y;

    QPen pen;

    void activate_arm();


private slots:

    void on_Generatearm_clicked();

    void on_joint1_valueChanged(int value);

    void on_joint2_valueChanged(int value);

    void on_joint3_valueChanged(int value);

    void on_Reset_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
