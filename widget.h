#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QString a;
    QStringList b;
    QString c;

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_equit_clicked();

    void on_pushButton_Sub_clicked();

    void on_pushButton_Mult_clicked();

    void on_pushButton_divi_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
