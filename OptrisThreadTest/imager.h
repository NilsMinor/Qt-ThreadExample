#ifndef IMAGER_H
#define IMAGER_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QTimer>


class imager : public QObject
{
    Q_OBJECT
public:
    explicit imager(QObject *parent = 0);
    ~imager ();
    void init (int _w, int _h, double _f);

    unsigned short * getData (void);



    int t;

private:
    QTimer * timer;
    QTimer * timer2;
    int w,h;
    long s;
    unsigned short * data;
    double f;
    bool receivedNewImage;

signals:
    void stopStreamingNow();
    void newImage           (void);

public slots:
    void startStreaming (void);
    void stopStreaming (void);
    void generateImage(void);
    void timerTimeout();
};

class imagerThread : public QThread
{
    Q_OBJECT

    public:

    protected:

};

#endif // IMAGER_H
