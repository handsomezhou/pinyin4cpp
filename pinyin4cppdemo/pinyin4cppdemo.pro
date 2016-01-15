#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T01:15:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pinyin4cppdemo
TEMPLATE = app


SOURCES += main.cpp \
    PinyinParseWidget.cpp

HEADERS  += \
    PinyinParseWidget.h


INCLUDEPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug
DEPENDPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug


INCLUDEPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug
DEPENDPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/release/ -lpinyin4cpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug/ -lpinyin4cpp
else:unix: LIBS += -L$$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/ -lpinyin4cpp

INCLUDEPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug
DEPENDPATH += $$PWD/../build-pinyin4cpp-Desktop_Qt_5_2_1_MinGW_32bit-Debug/debug
