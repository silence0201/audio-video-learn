#include "mainwindow.h"

#include <QApplication>

// 在QT中，不能使用C++标准的cout来打印信息
//#include <iostream>

#include <QDebug>

// FFmpeg是纯C语言的
// C++是不能直接导入C语言函数的
extern "C" {
    #include <libavcodec/avcodec.h>
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << av_version_info();
    MainWindow w;
    w.show();
    return a.exec();
}
