QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

INCLUDEPATH += $(GINS_SDK)/include
LIBS += -L$(GINS_SDK)/lib

SOURCES += \
    convertthread.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    convertthread.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

RC_FILE = ico.rc

DISTFILES += \
    config.ini


CONFIG += c++11
CONFIG += debug_and_release
CONFIG(debug, debug | release) {
    LIBS += -lgglobald -lgwidgetd
} else {
    LIBS +=  -lgglobal -lgwidget
}
