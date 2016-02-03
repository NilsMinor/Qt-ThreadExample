#ifndef MYCV_H
#define MYCV_H

#include <QObject>
#include <QThread>
#include <QDebug>

class mycv : public QObject
{
    Q_OBJECT
public:
    explicit mycv(QObject *parent = 0);
    ~mycv();
    void    init (int _w, int _h);
    float * getData (void);

private:
    int     w;
    int     h;
    long    s;
    float          *    ptr_RealTemperatureBuffer;

signals:
    void calculationDone();
public slots:
    void processData (unsigned short * ptrDataBuffer);
};

#endif // MYCV_H
