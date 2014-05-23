#-------------------------------------------------
#
# Project created by QtCreator 2014-05-15T10:36:56
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = movieDB
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mysqlmanager.cpp

HEADERS  += mainwindow.h \
    mysqlmanager.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc
