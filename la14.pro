#-------------------------------------------------
#
# Project created by QtCreator 2014-10-10T17:47:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = la14
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    tv_SaveAndOpen.cpp \
    tv_AddAndDelete.cpp \
    tv.cpp \
    sort_dlg_modal.cpp

HEADERS  += dialog.h \
    tv.h \
    sort_dlg_modal.h

FORMS    += dialog.ui
