#-------------------------------------------------
#
# Project created by QtCreator 2018-07-01T19:36:51
#
#-------------------------------------------------

QT       += core gui
QT       += xml
TARGET = BlackLine
TEMPLATE = app


SOURCES += main.cpp\
    scriptcreator.cpp \
    mainwindow.cpp \
    group.cpp \
    tab.cpp \
    checkbox.cpp \
    mode.cpp \
    workingstatus.cpp \
    xagt.cpp \
    xagtthread.cpp \
    backend.cpp

HEADERS  += \
    scriptcreator.h \
    mainwindow.h \
    group.h \
    tab.h \
    checkbox.h \
    mode.h \
    workingstatus.h \
    xagt.h \
    xagtthread.h \
    backend.h

FORMS    += \
    mainwindow.ui \
    mode.ui \
    tab.ui \
    workingstatus.ui

RESOURCES +=

OTHER_FILES += \
    rsc/auto.xml \
    rsc/x86.exe \
    rsc/x64.exe \
    rsc/system.xml \
    rsc/other.xml \
    rsc/network.xml \
    rsc/memory.xml \
    rsc/disk.xml \
    rsc/ramBackup.xml

















































