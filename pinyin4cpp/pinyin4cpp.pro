#-------------------------------------------------
#
# Project created by QtCreator 2015-03-31T21:40:45
#
#-------------------------------------------------

QT       -= gui

TARGET = pinyin4cpp
TEMPLATE = lib

DEFINES += PINYIN4CPP_LIBRARY

SOURCES += pinyin4cpp.cpp \
    HanyuPinyinOutputFormat.cpp \
    HanyuPinyinVCharType.cpp \
    HanyuPinyinCaseType.cpp \
    HanyuPinyinToneType.cpp

HEADERS += pinyin4cpp.h\
        pinyin4cpp_global.h \
    HanyuPinyinOutputFormat.h \
    HanyuPinyinVCharType.h \
    HanyuPinyinCaseType.h \
    HanyuPinyinToneType.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES += \
    res.qrc
