#include "mainwindow.h"
#include <QDebug>
#include "mypushbutton.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qDebug() << "窗口创建了";
    // 设置窗口的标题
    setWindowTitle("主窗口");
    // 设置窗口大小
    resize(600,600);

    QPushButton *btn = new QPushButton;
    btn->setText("登录");
    btn->setFixedSize(100,30);
    btn->move(100,200);
    btn->setParent(this);

    MyPushButton *btn2 = new MyPushButton(this);
    btn2->setText("注册");
    btn2->move(30,30);
}

MainWindow::~MainWindow()
{
}

