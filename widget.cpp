#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n){

    money += n;
    ui->lcdNumber->display(QString::number(money));
    ui->pbcoffee->setEnabled(true);
    QMessageBox msg;
    msg.information(nullptr,"title","text");
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbcoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbtea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbgongcha_clicked()
{
    changeMoney(-200);
}
