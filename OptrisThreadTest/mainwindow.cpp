#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pi.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::init()
{
    bool useThreads = ui->checkBoxThreading->isChecked();

    if (useThreads)
    {
        ui->labelThreads->setText("Multithreading");
    }
    else
    {
        ui->labelThreads->setText("Loop");
    }

    int freq = ui->lineEdit->text().toInt();

    cam1 = new Pi();
    cam1->init(0, 1000, 1000, freq, useThreads);

    cam2 = new Pi();
    cam2->init(1, 1000, 1000, freq, useThreads);

    cam3 = new Pi();
    cam3->init(0, 1000, 1000, freq, useThreads);

    cam4 = new Pi();
    cam4->init(1, 1000, 1000, freq, useThreads);

    connect(cam1,SIGNAL(ready(qint64)), this,SLOT(setTime1(qint64)));
    connect(cam2,SIGNAL(ready(qint64)), this,SLOT(setTime2(qint64)));
    connect(cam3,SIGNAL(ready(qint64)), this,SLOT(setTime3(qint64)));
    connect(cam4,SIGNAL(ready(qint64)), this,SLOT(setTime4(qint64)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTime1(qint64 t)
{ 
    ui->labelTime1->setText(QString::number(t));
}
void MainWindow::setTime2(qint64 t)
{
    ui->labelTime2->setText(QString::number(t));
}
void MainWindow::setTime3(qint64 t)
{
    ui->labelTime3->setText(QString::number(t));
}
void MainWindow::setTime4(qint64 t)
{
    ui->labelTime4->setText(QString::number(t));
}
void MainWindow::on_pushButtonStart_released()
{
    init();

    cam1->start();
    cam2->start();
    cam3->start();
    cam4->start();
}
void MainWindow::on_pushButtonStop_released()
{
    cam1->stop();
    cam2->stop();
    cam3->stop();
    cam4->stop();
}
