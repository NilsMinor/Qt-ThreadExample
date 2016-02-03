#include "imager.h"

        imager::imager(QObject *parent) : QObject(parent)
{
    w = 0;
    h = 0;
    s = 0;

    receivedNewImage = false;
    data = NULL;
    timer = new QTimer(this);
    connect (timer, SIGNAL(timeout()), this, SLOT(timerTimeout()));
    timer2 = new QTimer(this);
    connect (timer2, SIGNAL(timeout()), this, SLOT(generateImage()));
    timer2->start();
}
        imager::~imager()
{
    delete [] data;
    data = NULL;
}
void    imager::init (int _w, int _h, double _f)
{
    w = _w;
    h = _h;

    s = w * h;
    f = _f;
    t = (int) (1000/f);

    qDebug() << "Imager = " << w << " x " << h << " timeout " << t;
    data = new unsigned short [s];
}
unsigned short *  imager::getData()
{
    return data;
}
void    imager::generateImage()
{
    if (receivedNewImage == true)
    {
        //qDebug () << "New Image in thread      " << QThread::currentThreadId();

        for(long i=0;i!=s;i++)
        {
            data[i] = qrand() % 10000;
        }

        receivedNewImage = false;
        emit newImage();
    }
}
void    imager::startStreaming()
{
     timer->start(t);
}
void    imager::stopStreaming()
{
    timer->stop();
}
void    imager::timerTimeout()
{
    receivedNewImage = true;
}
