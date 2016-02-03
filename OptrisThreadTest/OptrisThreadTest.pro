#-------------------------------------------------
#
# Project created by QtCreator 2016-01-23T11:28:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OptrisThreadTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    pi.cpp \
    imagerhandler.cpp \
    imager.cpp \
    mycv.cpp

HEADERS  += mainwindow.h \
    pi.h \
    imagerhandler.h \
    imager.h \
    mycv.h

FORMS    += mainwindow.ui
