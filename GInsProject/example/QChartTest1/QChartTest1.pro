QT       += core gui widgets sql charts

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp \
    xbarr.cpp

HEADERS += \
    widget.h \
    xbarr.h

GINS = $$PWD/GIns
INCLUDEPATH += $(FSDK)/include \
                             $$GINS/include

LIBS += -L$(FSDK)/lib/mysql -llibmysql \
             -L$$GINS/lib/x86 -lgiutility

CONFIG += debug_and_release
CONFIG(debug, debug | release) {
        LIBS += -L$(FSDK)/lib -lfqdatabased
} else {
        LIBS += -L$(FSDK)/lib -lfqdatabase
}


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
