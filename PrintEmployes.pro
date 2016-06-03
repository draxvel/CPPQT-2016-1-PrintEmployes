TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    printable.cpp

HEADERS += \
    printable.h \
    employee.h
