/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *link3_tag;
    QLabel *label_2;
    QLabel *link1_tag;
    QSlider *joint1;
    QLabel *label;
    QSlider *joint2;
    QLabel *link2_tag;
    QSlider *joint3;
    QLabel *label_3;
    QLabel *indicate_joint1;
    QPushButton *Generatearm;
    QSpinBox *link3;
    QSpinBox *link2;
    QSpinBox *link1;
    QPushButton *Reset;
    QLabel *indicate_joint2;
    QLabel *indicate_joint3;
    QGraphicsView *ground;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(570, 50, 221, 421));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        link3_tag = new QLabel(gridLayoutWidget);
        link3_tag->setObjectName(QString::fromUtf8("link3_tag"));

        gridLayout->addWidget(link3_tag, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1);

        link1_tag = new QLabel(gridLayoutWidget);
        link1_tag->setObjectName(QString::fromUtf8("link1_tag"));

        gridLayout->addWidget(link1_tag, 0, 0, 1, 1);

        joint1 = new QSlider(gridLayoutWidget);
        joint1->setObjectName(QString::fromUtf8("joint1"));
        joint1->setMaximum(360);
        joint1->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(joint1, 5, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        joint2 = new QSlider(gridLayoutWidget);
        joint2->setObjectName(QString::fromUtf8("joint2"));
        joint2->setMaximum(360);
        joint2->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(joint2, 6, 1, 1, 1);

        link2_tag = new QLabel(gridLayoutWidget);
        link2_tag->setObjectName(QString::fromUtf8("link2_tag"));

        gridLayout->addWidget(link2_tag, 1, 0, 1, 1);

        joint3 = new QSlider(gridLayoutWidget);
        joint3->setObjectName(QString::fromUtf8("joint3"));
        joint3->setMaximum(360);
        joint3->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(joint3, 7, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        indicate_joint1 = new QLabel(gridLayoutWidget);
        indicate_joint1->setObjectName(QString::fromUtf8("indicate_joint1"));

        gridLayout->addWidget(indicate_joint1, 5, 2, 1, 1);

        Generatearm = new QPushButton(gridLayoutWidget);
        Generatearm->setObjectName(QString::fromUtf8("Generatearm"));

        gridLayout->addWidget(Generatearm, 3, 0, 1, 3);

        link3 = new QSpinBox(gridLayoutWidget);
        link3->setObjectName(QString::fromUtf8("link3"));

        gridLayout->addWidget(link3, 2, 1, 1, 2);

        link2 = new QSpinBox(gridLayoutWidget);
        link2->setObjectName(QString::fromUtf8("link2"));

        gridLayout->addWidget(link2, 1, 1, 1, 2);

        link1 = new QSpinBox(gridLayoutWidget);
        link1->setObjectName(QString::fromUtf8("link1"));

        gridLayout->addWidget(link1, 0, 1, 1, 2);

        Reset = new QPushButton(gridLayoutWidget);
        Reset->setObjectName(QString::fromUtf8("Reset"));

        gridLayout->addWidget(Reset, 8, 0, 1, 3);

        indicate_joint2 = new QLabel(gridLayoutWidget);
        indicate_joint2->setObjectName(QString::fromUtf8("indicate_joint2"));

        gridLayout->addWidget(indicate_joint2, 6, 2, 1, 1);

        indicate_joint3 = new QLabel(gridLayoutWidget);
        indicate_joint3->setObjectName(QString::fromUtf8("indicate_joint3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(indicate_joint3->sizePolicy().hasHeightForWidth());
        indicate_joint3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(indicate_joint3, 7, 2, 1, 1);

        ground = new QGraphicsView(centralwidget);
        ground->setObjectName(QString::fromUtf8("ground"));
        ground->setGeometry(QRect(30, 30, 531, 521));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ground->sizePolicy().hasHeightForWidth());
        ground->setSizePolicy(sizePolicy1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        link3_tag->setText(QCoreApplication::translate("MainWindow", "Link 3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "joint2", nullptr));
        link1_tag->setText(QCoreApplication::translate("MainWindow", "Link 1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "joint1", nullptr));
        link2_tag->setText(QCoreApplication::translate("MainWindow", "Link 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "joint3", nullptr));
        indicate_joint1->setText(QString());
        Generatearm->setText(QCoreApplication::translate("MainWindow", "Generate arm", nullptr));
        Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        indicate_joint2->setText(QString());
        indicate_joint3->setText(QCoreApplication::translate("MainWindow", "indicate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
