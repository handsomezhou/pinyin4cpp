#-------------------------------------------------
#
# Project created by QtCreator 2015-02-11T17:57:58
#
#-------------------------------------------------

QT       -= gui

TARGET = pinyin4cpp
TEMPLATE = lib

DEFINES += PINYIN4CPP_LIBRARY

SOURCES += PinyinHelper.cpp

HEADERS += PinyinHelper.h\
        pinyin4cpp_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
