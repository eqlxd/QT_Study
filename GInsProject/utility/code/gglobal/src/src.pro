#-------------------------------------------------
#
# Project created by QtCreator 2021-02-22T11:19:39
#
#-------------------------------------------------

QT       -= gui

TARGET = $$qtLibraryTarget(gglobal)
TEMPLATE = lib
CONFIG += plugin c++11
DEFINES += GGLOBAL_LIBRARY

DESTDIR = $(GINS_SDK)/lib
INCLUDEPATH += $(GINS_SDK)/include

SOURCES += \
    license.cpp

HEADERS += \
    dpoint.h \
    export_define.h \
    license.h \
    singleton.h
