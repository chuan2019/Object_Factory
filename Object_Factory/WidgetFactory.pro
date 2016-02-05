QT += core gui
QT += widgets

TEMPLATE = app
TARGET   = WidgetFactory

HEADERS += widgetfactoryinterface.h \
           widgetfactory.h

SOURCES += main.cc widgetfactory.cc widgetfactoryinterface.cc

QMAKE_CXXFLAGS += -std=c++11
