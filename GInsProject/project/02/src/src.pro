QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

GINS_API = $(GINS_PATH)/api

INCLUDEPATH += $(GINS_SDK)/include \
                             $$GINS_API/include
LIBS += -L$$GINS_API/lib -lgiutility

CONFIG += debug_and_release
CONFIG(debug, debug | release) {
    LIBS += -L$(GINS_SDK)/lib -lgwidgetd
} else {
    LIBS += -L$(GINS_SDK)/lib -lgwidget
}

SOURCES += \
    main.cpp \
    projectinstance.cpp \
    widget/dscheckcombomodel.cpp \
    widget/mainwindow.cpp \
    widget/chartwidget.cpp \
    datacenter.cpp

HEADERS += \
    projectinstance.h \
    widget/dscheckcombomodel.h \
    widget/mainwindow.h \
    widget/chartwidget.h \
    datacenter.h

RESOURCES += \
    res.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
