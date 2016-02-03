#ifndef PI_H
#define PI_H

#include <QObject>
#include <QtCore>
#include <imager.h>
#include <mycv.h>
#include <QElapsedTimer>


/* new image avaialbe
 * --> get iamge and copy data
 * --> calculate temperature
 * --> do computer-vision stuff
 * --> build image data
 * --> render image data to screen
 *
 */

class Pi : public QObject
{
    Q_OBJECT
public:
    explicit Pi(QObject *parent = 0);
    ~Pi();
    void init (int _id, int _w, int _h, int _f, bool _useThreads);
    void initThreading (void);
    void initWithoutThreading(void);

    void start ();
    void stop  ();


private:
    int     w;
    int     h;
    long    s;
    unsigned short *    ptr_ThermalBuffer;
    float *             ptr_RealTemperature;
    double  f;
    int     id;

    imager *i;
    mycv * cv;
    QThread * imagerThread;
    QThread * calculationThread;

    QElapsedTimer * timer;

    bool useThreads;
    void generateImage(void);

signals:
    void startSignal();
    void stopSignal();
    void newDataForCalculation(unsigned short *);
    void ready (qint64);


public slots:
    void printInfo          ();
    void receiveNewImage    ();
    void slotReady();


};

#endif // PI_H
