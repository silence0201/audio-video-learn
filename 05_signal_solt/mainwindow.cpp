#include "mainwindow.h"
#include <QPushButton>
#include "sender.h"
#include "receiver.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *btn = new QPushButton;
    btn->setText("关闭");
    btn->setFixedSize(100,30);
    btn->setParent(this);

    connect(btn, &QPushButton::clicked,this,&MainWindow::close);


    Sender *sender = new Sender;
    Receiver *reveiver = new Receiver;
    connect(sender,&Sender::exit,reveiver,&Receiver::handleExit);

    emit sender->exit();

    delete sender;
    delete reveiver;
}

MainWindow::~MainWindow()
{
}

