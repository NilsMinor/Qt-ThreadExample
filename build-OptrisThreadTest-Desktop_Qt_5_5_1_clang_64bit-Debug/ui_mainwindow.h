/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *labelThreads;
    QLabel *labelTime1;
    QCheckBox *checkBoxThreading;
    QLabel *labelTimeSettings;
    QLabel *labelTime_2;
    QLabel *labelTime2;
    QLabel *labelTime3;
    QLabel *labelTime4;
    QLineEdit *lineEdit;
    QLabel *labelTime_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setGeometry(QRect(30, 90, 115, 41));
        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));
        pushButtonStop->setGeometry(QRect(170, 90, 115, 41));
        labelThreads = new QLabel(centralWidget);
        labelThreads->setObjectName(QStringLiteral("labelThreads"));
        labelThreads->setGeometry(QRect(40, 60, 101, 16));
        labelTime1 = new QLabel(centralWidget);
        labelTime1->setObjectName(QStringLiteral("labelTime1"));
        labelTime1->setGeometry(QRect(110, 140, 71, 16));
        checkBoxThreading = new QCheckBox(centralWidget);
        checkBoxThreading->setObjectName(QStringLiteral("checkBoxThreading"));
        checkBoxThreading->setGeometry(QRect(30, 20, 89, 20));
        labelTimeSettings = new QLabel(centralWidget);
        labelTimeSettings->setObjectName(QStringLiteral("labelTimeSettings"));
        labelTimeSettings->setGeometry(QRect(40, 140, 41, 16));
        labelTime_2 = new QLabel(centralWidget);
        labelTime_2->setObjectName(QStringLiteral("labelTime_2"));
        labelTime_2->setGeometry(QRect(90, 140, 21, 16));
        labelTime2 = new QLabel(centralWidget);
        labelTime2->setObjectName(QStringLiteral("labelTime2"));
        labelTime2->setGeometry(QRect(110, 160, 71, 16));
        labelTime3 = new QLabel(centralWidget);
        labelTime3->setObjectName(QStringLiteral("labelTime3"));
        labelTime3->setGeometry(QRect(110, 180, 71, 16));
        labelTime4 = new QLabel(centralWidget);
        labelTime4->setObjectName(QStringLiteral("labelTime4"));
        labelTime4->setGeometry(QRect(110, 200, 71, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 30, 51, 21));
        labelTime_3 = new QLabel(centralWidget);
        labelTime_3->setObjectName(QStringLiteral("labelTime_3"));
        labelTime_3->setGeometry(QRect(140, 30, 81, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButtonStart->setText(QApplication::translate("MainWindow", "Start", 0));
        pushButtonStop->setText(QApplication::translate("MainWindow", "Stop", 0));
        labelThreads->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelTime1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        checkBoxThreading->setText(QApplication::translate("MainWindow", "Threading", 0));
        labelTimeSettings->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelTime_2->setText(QApplication::translate("MainWindow", "=", 0));
        labelTime2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelTime3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelTime4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        labelTime_3->setText(QApplication::translate("MainWindow", "Frequenz = ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
