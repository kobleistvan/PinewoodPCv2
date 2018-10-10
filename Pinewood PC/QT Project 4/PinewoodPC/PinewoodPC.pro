#-------------------------------------------------
#
# Project created by QtCreator 2012-07-14T17:29:44
#
#-------------------------------------------------

QT += core gui
QT += sql
TARGET = PinewoodPC
TEMPLATE = app


SOURCES += main.cpp\
        pinewoodpc.cpp \
    racer.cpp \
    controller.cpp \
    prioritylist.cpp \
    viewracers.cpp \
    manageracers.cpp

HEADERS  += pinewoodpc.h \
    racer.h \
    controller.h \
    prioritylist.h \
    viewracers.h \
    manageracers.h

FORMS    += pinewoodpc.ui \
    prioritylist.ui \
    viewracers.ui \
    manageracers.ui
