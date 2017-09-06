#-------------------------------------------------
#
# Project created by QtCreator 2017-09-05T19:42:49
#
#-------------------------------------------------

QT       += core gui multimedia network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewGwent
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    mainshow.cpp \
    card.cpp \
    abstractshow.cpp \
    welcomeshow.cpp \
    battleshow.cpp \
    battlelog.cpp \
    sound.cpp

HEADERS += \
    mainshow.h \
    card.h \
    abstractshow.h \
    welcomeshow.h \
    battleshow.h \
    battlelog.h \
    sound.h

FORMS += \
    welcomeshow.ui \
    battleshow.ui

RESOURCES += \
    image.qrc \
    audio.qrc



