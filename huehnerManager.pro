QT       += core gui sql \
            printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dlgloginwindow.cpp \
    frmaddmitarbeiter.cpp \
    frmlegedaten.cpp \
    frmstammdaten.cpp \
    main.cpp \
    mainwindow.cpp \
    spalshscreen.cpp

HEADERS += \
    dlgloginwindow.h \
    enums.h \
    frmaddmitarbeiter.h \
    frmlegedaten.h \
    frmstammdaten.h \
    mainwindow.h \
    spalshscreen.h

FORMS += \
    dlgloginwindow.ui \
    frmaddmitarbeiter.ui \
    frmlegedaten.ui \
    frmstammdaten.ui \
    mainwindow.ui \
    spalshscreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Ressourcen.qrc

TRANSLATIONS += \
    translate_de.ts
    traslate_en.ts
    traslate_zh_CN.ts

DISTFILES += \
    .github/workflows/qt-ci.yml

