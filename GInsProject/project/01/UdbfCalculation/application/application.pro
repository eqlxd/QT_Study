QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = $$qtLibraryTarget(UdbfCalculation)
CONFIG += c++11
INCLUDEPATH += $(FSDK)/include
LIBS += -L$(FSDK)/lib_x64 -L$$PWD/udbf -ldbghelp -luser32

CONFIG += debug_and_release
CONFIG(debug, debug | release) {
    DEFINES += DEBUG_MYSELF
    LIBS += -lfcommond -lfqutilityd -lfqwidgetsd -ludbfparserd
} else {
    LIBS += -lfcommon -lfqutility -lfqwidgets -ludbfparser
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    license.cpp \
    generatethread.cpp \
    main.cpp \
    messageinfo.cpp \
    runinfowidget.cpp \
    tabledelegate.cpp \
    widget.cpp \
    filedelegate.cpp

HEADERS += \
    license.h \
    generatethread.h \
    messageinfo.h \
    runinfowidget.h \
    tabledelegate.h \
    widget.h \
    filedelegate.h

RESOURCES += \
    res.qrc

RC_FILE = ico.rc

DISTFILES += \
    ReadMe.txt


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
