#include "fashion.h"
#include "ui_fashion.h"
#include <QDesktopServices>
#include <QUrl>


fashion::fashion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fashion)
{
    ui->setupUi(this);

}

fashion::~fashion()
{
    delete ui;
}

void fashion::on_link1_clicked()
{
    QString link= "https://unece.org/forestry/press/un-alliance-aims-put-fashion-path-sustainability";
    QDesktopServices :: openUrl(QUrl(link));
}


void fashion::on_link2_clicked()
{
    QString link= "https://unfccc.int/news/un-helps-fashion-industry-shift-to-low-carbon";
    QDesktopServices :: openUrl(QUrl(link));
}



void fashion::on_link3_clicked()
{
    QString link= "https://www.bbc.com/future/article/20200310-sustainable-fashion-how-to-buy-clothes-good-for-the-climate";
    QDesktopServices :: openUrl(QUrl(link));
}



void fashion::on_link4_clicked()
{
    QString link= "https://ecofriend.org/how-sustainable-fashion-can-help-the-planet-we-live-in/#";
    QDesktopServices :: openUrl(QUrl(link));
}


