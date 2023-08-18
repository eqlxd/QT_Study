QT       += core gui widgets

CONFIG += c++11
INCLUDEPATH += $(GINS_SDK)/include

LIBS += -L$(GINS_SDK)/lib

CONFIG += c++11
CONFIG += debug_and_release
CONFIG(debug, debug | release) {
    LIBS += -lgglobald -lgwidgetd
} else {
    LIBS +=  -lgglobal -lgwidget
}

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    widget.h
