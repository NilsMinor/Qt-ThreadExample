#ifndef IMAGERHANDLER_H
#define IMAGERHANDLER_H

#include <QObject>
#include <QThread>

class imagerHandler : public QObject
{
    Q_OBJECT
public:
    explicit imagerHandler(QObject *parent = 0);

signals:

public slots:
};

#endif // IMAGERHANDLER_H
