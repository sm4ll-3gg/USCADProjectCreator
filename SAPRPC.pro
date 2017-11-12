#-------------------------------------------------
#
# Project created by QtCreator 2017-11-11T13:53:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SAPRPC
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


SOURCES += \
    pages/auxiliary_classes/delegates/comboboxdelegate.cpp \
    pages/auxiliary_classes/delegates/validatordelegate.cpp \
    pages/auxiliary_classes/models/loadsmodel.cpp \
    pages/auxiliary_classes/models/supportmodel.cpp \
    pages/auxiliary_classes/datainputwidget.cpp \
    pages/corespage.cpp \
    pages/coretypespage.cpp \
    pages/loadspage.cpp \
    pages/nodespage.cpp \
    pages/supportspage.cpp \
    main.cpp \
    projectcreator.cpp \
    pages/abstractpage.cpp \
    pages/saveprojectpage.cpp

HEADERS += \
    pages/auxiliary_classes/delegates/comboboxdelegate.h \
    pages/auxiliary_classes/delegates/validatordelegate.h \
    pages/auxiliary_classes/models/loadsmodel.h \
    pages/auxiliary_classes/models/supportmodel.h \
    pages/auxiliary_classes/datainputwidget.h \
    pages/corespage.h \
    pages/coretypespage.h \
    pages/loadspage.h \
    pages/nodespage.h \
    pages/supportspage.h \
    declarations.h \
    projectcreator.h \
    pages/abstractpage.h \
    pages/saveprojectpage.h

FORMS += \
    pages/auxiliary_classes/datainputwidget.ui \
    projectcreator.ui \
    pages/saveprojectpage.ui

SUBDIRS += \
    SAPRPC.pro

RESOURCES += \
    main.qrc
