#include "automotive.h"
#include "ui_automotive.h"
#include <QDesktopServices>
#include <QUrl>


automotive::automotive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::automotive)
{
    ui->setupUi(this);
}

automotive::~automotive()
{
    delete ui;
}

void automotive::on_link1_clicked()
{
    QString link= "https://www.ucsusa.org/resources/car-emissions-global-warming#:~:text=Our%20personal%20vehicles%20are%20a,for%20every%20gallon%20of%20gas.";
    QDesktopServices :: openUrl(QUrl(link));
}


void automotive::on_link2_clicked()
{
    QString link= "https://www.insurancedekho.com/car-insurance/news/how-to-reduce-pollution-from-cars.htm";
    QDesktopServices :: openUrl(QUrl(link));
}

