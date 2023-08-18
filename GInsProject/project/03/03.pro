QT       += core gui widgets

TARGET = $$qtLibraryTarget(Rosettes_PCBStrainRate)
GAPI = $(GINS_PATH)/api
INCLUDEPATH += $$GAPI/include \
                             $(GINS_SDK)/include

LIBS += -L$$GAPI/lib -lgiutility \
               -L$(GINS_SDK)/lib

CONFIG += c++11
CONFIG += debug_and_release
CONFIG(debug, debug | release) {
    LIBS += -lgglobald -lgwidgetd
} else {
    LIBS +=  -lgglobal -lgwidget
}

SOURCES += \
    giwriter.cpp \
    globalapp.cpp \
    main.cpp \
    readbuffer.cpp \
    udbfwriter.cpp \
    widget/hwwidgetd.cpp \
    widget/hwwidgetu.cpp \
    widget/mainwindow.cpp \
    widget/mathwidgetd.cpp \
    widget/mathwidgetu.cpp \
    widget/setpcbwidget.cpp \
    widget/setrosetteswidget.cpp \
    widget/test_mainwindow.cpp \
    test_thread\testreadthread.cpp \
    test_thread\testwritethread.cpp \
    test_thread\readwritethread.cpp


HEADERS += \
    formula.h \
    giwriter.h \
    globalapp.h \
    readbuffer.h \
    udbfwriter.h \
    widget/hwwidgetd.h \
    widget/hwwidgetu.h \
    widget/mainwindow.h \
    widget/mathwidgetd.h \
    widget/mathwidgetu.h \
    widget/setpcbwidget.h \
    widget/setrosetteswidget.h \
    widget/test_mainwindow.h \
    test_thread\testreadthread.h \
    test_thread\testwritethread.h \
    test_thread\readwritethread.h

RESOURCES += \
    res.qrc

RC_FILE = ico.rc

DISTFILES += \
    config.ini
