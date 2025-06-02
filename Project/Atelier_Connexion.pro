#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql
QT       += core gui sql printsupport network
QT       += core gui sql charts
QT += widgets
QT      +=  network widgets
//QT  += core gui sql printsupport network multimedia
QT += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    arduino.cpp \
    commande.cpp \
    entreprise.cpp \
    equipement.cpp \
    exportexcelobjet.cpp \
    fournisseur.cpp \
    googlesuggest.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    qrcode.cpp \
    screenshot.cpp \
    searchbox.cpp \
    stmp.cpp

HEADERS += \
    arduino.h \
    commande.h \
    entreprise.h \
    equipement.h \
    exportexcelobjet.h \
    fournisseur.h \
    googlesuggest.h \
        mainwindow.h \
    connection.h \
    qrcode.h \
    screenshot.h \
    searchbox.h \
    stmp.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressource.qrc
