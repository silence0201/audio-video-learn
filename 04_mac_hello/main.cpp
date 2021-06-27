#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

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
