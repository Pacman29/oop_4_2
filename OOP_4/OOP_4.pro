#-------------------------------------------------
#
# Project created by QtCreator 2016-06-10T16:06:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OOP_4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    controller.cpp \
    door.cpp \
    elevator.cpp \
    button.cpp

HEADERS  += mainwindow.h \
    controller.h \
    door.h \
    elevator.h \
    button.h

FORMS    += mainwindow.ui
