#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    a.clear();
    b.clear();
}

Widget::~Widget()
{
    delete ui;


}


void Widget::on_pushButton_1_clicked()
{
    a += "1";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_2_clicked()
{
    a += "2";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_3_clicked()
{
    a += "3";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_4_clicked()
{
    a += "4";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_5_clicked()
{
    a += "5";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_6_clicked()
{
    a += "6";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_7_clicked()
{
    a += "7";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_8_clicked()
{
    a += "8";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_9_clicked()
{
    a += "9";
    ui->lineEdit->setText(a);
}

void Widget::on_pushButton_0_clicked()
{
    a += "0";
    ui->lineEdit->setText(a);
}

//加法
void Widget::on_pushButton_add_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"+");
    ui->lineEdit->setText(a);
}

//等于
void Widget::on_pushButton_equit_clicked()
{
    if (!a.isEmpty() && !b.isEmpty()) {
        b.insert(2, a);
        int v3;
        if (b.at(1) == "+") {
            v3 = QString(b.at(0)).toInt() + QString(b.at(2)).toInt();
            ui->lineEdit->setText(QString::number(v3));
        } else if (b.at(1) == "-") {
            v3 = QString(b.at(0)).toInt() - QString(b.at(2)).toInt();
            ui->lineEdit->setText(QString::number(v3));
        } else if (b.at(1) == "*") {
            v3 = QString(b.at(0)).toInt() * QString(b.at(2)).toInt();
            ui->lineEdit->setText(QString::number(v3));
        } else if (b.at(1) == "/") {
            v3 = QString(b.at(0)).toInt() / QString(b.at(2)).toInt();
            ui->lineEdit->setText(QString::number(v3));
        }

        // 清空a和b，同时将结果保存到a，以便后续计算
        a = QString::number(v3);
        b.clear();
    }
    else {
        b.insert(0, a);
        a.clear();
    }
}

//减法
void Widget::on_pushButton_Sub_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"-");
    ui->lineEdit->setText(a);
}

//乘法
void Widget::on_pushButton_Mult_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"*");
    ui->lineEdit->setText(a);
}


//除法
void Widget::on_pushButton_divi_clicked()
{
    b.insert(0,a);
    a.clear();
    b.insert(1,"/");
    ui->lineEdit->setText(a);
}

//清除键
void Widget::on_pushButton_clear_clicked()
{
    a.clear();
    b.clear();
    ui->lineEdit->setText("0");
}







