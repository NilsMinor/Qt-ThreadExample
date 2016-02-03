#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <pi.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Pi *cam1;
    Pi *cam2;
    Pi *cam3;
    Pi *cam4;

    void init ();
private slots:
    void on_pushButtonStart_released();

    void on_pushButtonStop_released();
    void setTime1(qint64 t);
    void setTime2(qint64 t);
    void setTime3(qint64 t);
    void setTime4(qint64 t);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
