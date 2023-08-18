QT -= gui

TEMPLATE = lib
DEFINES += UDBFPARSER_LIBRARY
TARGET = $$qtLibraryTarget(udbfparser)

CONFIG += c++11

INCLUDEPATH += $(FSDK)/include
LIBS += -L$(FSDK)/lib_x64
DESTDIR = $$PWD/../application/udbf

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    udbfparser.cpp

HEADERS += \
    UdbfParser_global.h \
    udbfparser.h

CONFIG += plugin

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
