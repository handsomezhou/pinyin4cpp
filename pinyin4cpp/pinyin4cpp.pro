#-------------------------------------------------
#
# Project created by QtCreator 2015-02-11T18:38:51
#
#-------------------------------------------------

QT       -= gui

TARGET = pinyin4cpp
TEMPLATE = lib

DEFINES += PINYIN4CPP_LIBRARY

SOURCES += pinyinhelper.cpp

HEADERS += pinyinhelper.h\
        pinyin4cpp_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES += \
    res.qrc
