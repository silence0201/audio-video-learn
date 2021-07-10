QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    playthread.cpp

HEADERS += \
    mainwindow.h \
    playthread.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32 {
    FFMPEG_HOME = F:/Dev/ffmpeg-4.3.2
    SDL_HOME = F:/Dev/SDL2-2.0.14/x86_64-w64-mingw32
}

macx {
    FFMPEG_HOME = /usr/local/Cellar/ffmpeg/4.3.2_3
    SDL_HOME = /usr/local/Cellar/sdl2/2.0.14_1
}

INCLUDEPATH += $${FFMPEG_HOME}/include
LIBS += -L$${FFMPEG_HOME}/lib \
        -lavdevice \
        -lavcodec \
        -lavformat \
        -lavutil

INCLUDEPATH += $${SDL_HOME}/include
LIBS += -L$${SDL_HOME}/lib \
        -lSDL2
