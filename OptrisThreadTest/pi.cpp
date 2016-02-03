#include "pi.h"

Pi::Pi(QObject *parent) : QObject(parent)
{
    w = 0;
    h = 0;
    s = 0;
    id = -1;

    ptr_ThermalBuffer = NULL;
    ptr_RealTemperature = NULL;
    timer = new QElapsedTimer();
    timer->start();
}
Pi::~Pi()
{
    delete [] ptr_ThermalBuffer;
    ptr_ThermalBuffer = NULL;
}
void Pi::init(int _id, int _w, int _h, int _f, bool _useThreads)
{
    w = _w;
    h = _h;
    s = w*h;
    f = _f;
    id = _id;
    useThreads = _useThreads;

    ptr_ThermalBuffer = new unsigned short [s];
    ptr_RealTemperature = new float [s];

    i = new imager( );
    i->init(w,h,f);

    cv = new mycv( );
    cv->init(w,h);

    if (useThreads)
    {
        initThreading();
    }
    else
    {
        initWithoutThreading();
    }

    connect(i, SIGNAL(newImage()), this, SLOT(receiveNewImage()));              // imager -> pi
    connect(cv,SIGNAL(calculationDone()), this,SLOT(printInfo()));
    connect(cv,SIGNAL(calculationDone()), this,SLOT(slotReady()));

    connect(this, SIGNAL(newDataForCalculation(unsigned short *)),cv,SLOT(processData(unsigned short*)));
}
void Pi::initThreading()
{
    imagerThread = new QThread;
    calculationThread = new QThread;

    connect(imagerThread, SIGNAL(started()), i, SLOT(generateImage()));         // Thread -> imager
    connect(imagerThread, SIGNAL(started()), i, SLOT(startStreaming()));        // Thread started timer
}
void Pi::initWithoutThreading()
{

}

void Pi::receiveNewImage()
{
    memcpy(ptr_ThermalBuffer, i->getData(), s);
    emit newDataForCalculation(ptr_ThermalBuffer);
}
void Pi::printInfo()
{
    //qDebug() << "cam " << id << " = " << QThread::currentThreadId();
    //qDebug() << "Value = " << ptr_ThermalBuffer[5] << " = " << cv->getData()[5];
}
void Pi::start()
{
    emit startSignal();
    if (useThreads)
    {
        imagerThread->start();
        i->moveToThread(imagerThread);
        calculationThread->start();
        cv->moveToThread(calculationThread);
    }
    else
    {
        i->startStreaming();
    }
}
void Pi::stop()
{
    emit stopSignal();
}
void Pi::slotReady()
{
    emit ready( timer->elapsed());
    timer->restart();
}
