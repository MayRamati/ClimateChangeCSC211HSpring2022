#include "food.h"
#include "ui_food.h"
#include <iostream>
#include <QUrl>
#include <QDesktopServices>


food::food(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::food)
{
    ui->setupUi(this);
}

food::~food()
{
    delete ui;
}


void food::on_link1_clicked()
{
    QString link= "https://foodprint.org/the-total-footprint-of-our-food-system/issues/the-industrial-food-system/";
    QDesktopServices :: openUrl(QUrl(link));
}


void food::on_link2_clicked()
{
    QString link= "https://www.soilassociation.org/take-action/organic-living/why-organic/better-for-the-planet/does-climate-change-mean-i-need-to-stop-eating-meat/";
    QDesktopServices :: openUrl(QUrl(link));
}


void food::on_link3_clicked()
{
    QString link= "https://www.bbc.com/news/explainers-59232599";
    QDesktopServices :: openUrl(QUrl(link));
}


void food::on_link4_clicked()
{
    QString link= "https://www.msc.org/what-we-are-doing/oceans-at-risk/climate-change-and-fishing";
    QDesktopServices :: openUrl(QUrl(link));
}


void food::on_link5_clicked()
{
    QString link=  "http://foodprint.org/what-is-foodprint/?gclid=CjwKCAjw9e6SBhB2EiwA5myr9kttdeak_Lqrl5M0StLhYZtSZr94-TmRzv0yX9AYOqxP1YavBOGVHxoC2ScQAvD_BwE";
    QDesktopServices :: openUrl(QUrl(link));
}

