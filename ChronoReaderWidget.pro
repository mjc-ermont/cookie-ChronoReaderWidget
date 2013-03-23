#-------------------------------------------------
#
# Project created by QtCreator 2013-01-26T14:37:41
#
#-------------------------------------------------

QT       += core gui

TARGET = ChronoReaderWidget
TEMPLATE = app


SOURCES += main.cpp\
        chronoreaderwidget.cpp \
    eventbox.cpp \
    TimeCalc/timecalcs.cpp

HEADERS  += chronoreaderwidget.h \
    eventbox.h \
    TimeCalc/timecalcs.h

FORMS    += chronoreaderwidget.ui \
    eventbox.ui


unix|win32: LIBS += -lqjson
