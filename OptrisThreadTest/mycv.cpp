#include "mycv.h"

mycv::mycv(QObject *parent) : QObject(parent)
{
    w = h = 0;
    s = 0;
    ptr_RealTemperatureBuffer = NULL;
}

mycv::~mycv()
{
    delete [] ptr_RealTemperatureBuffer;
    ptr_RealTemperatureBuffer = NULL;
}
void mycv::init(int _w, int _h)
{
    w = _w;
    h = _h;
    s = w*h;

    ptr_RealTemperatureBuffer = new float[s];
}

void  mycv::processData (unsigned short * ptrDataBuffer)
{
    //qDebug() << "Calculate Data in Thread " << QThread::currentThreadId();

    for(long i=0;i!=s;i++)
    {
        ptr_RealTemperatureBuffer[i] = (float) ((ptrDataBuffer[i] - 1000) / 10.0);
    }
    emit calculationDone();

}
float* mycv::getData()
{
    return ptr_RealTemperatureBuffer;
}
