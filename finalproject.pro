QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    automotive.cpp \
    bitcoin.cpp \
    climatechange.cpp \
    deforestation.cpp \
    fashion.cpp \
    food.cpp \
    instructions.cpp \
    main.cpp \
    mainwindow.cpp \
    questionnaire1.cpp \
    survey.cpp \
    topics.cpp

HEADERS += \
    automotive.h \
    bitcoin.h \
    climatechange.h \
    deforestation.h \
    fashion.h \
    food.h \
    instructions.h \
    mainwindow.h \
    person.h \
    questionnaire1.h \
    survey.h \
    topics.h

FORMS += \
    automotive.ui \
    bitcoin.ui \
    climatechange.ui \
    deforestation.ui \
    fashion.ui \
    food.ui \
    instructions.ui \
    mainwindow.ui \
    questionnaire1.ui \
    survey.ui \
    topics.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    about \
    instructions

RESOURCES += \
    backgrounds.qrc
