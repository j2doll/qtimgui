
TARGET = demo-widget

TEMPLATE = app

QT += core gui widgets

include(../qtimgui.pri)

HEADERS += \
 MainWindow.h \
 MainImGui.h

SOURCES += \
 MainWindow.cpp \
 main.cpp \
 MainImGui.cpp


