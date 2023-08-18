#-------------------------------------------------
#
# Project created by QtCreator 2022-07-02T14:00:00
#
#-------------------------------------------------

QT       += widgets
QT       -= gui

TARGET = $$qtLibraryTarget(gwidget)
TEMPLATE = lib
CONFIG += plugin c++11
DEFINES += GWIDGET_LIBRARY

DESTDIR = $(GINS_SDK)/lib
INCLUDEPATH += $(GINS_SDK)/include
LIBS += -luser32

SOURCES += \
    gcombobox.cpp \
    geditabledelegate.cpp \
    glineedit.cpp \
    gruninfowidget.cpp \
    gtablemodel.cpp \
    gtableview.cpp

HEADERS += \
    gcombobox.h \
    geditabledelegate.h \
    glineedit.h \
    gruninfowidget.h \
    gtablemodel.h \
    gtableview.h \
    gwidget_global.h
