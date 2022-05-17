#include "topics.h"
#include "ui_topics.h"
#include "food.h"
#include "fashion.h"
#include "deforestation.h"
#include "automotive.h"
#include "bitcoin.h"
#include "survey.h"
#include "questionnaire1.h"
#include <QFile>
#include <QTextStream>

Topics::Topics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Topics)
{
    ui->setupUi(this);
    setStyleSheet("background-image: url(:/image/earth3.jpg);");

}

Topics::~Topics()
{
    delete ui;
}



void Topics::on_food_clicked()
{

    food food1;
    food1.setModal(true);
    food1.exec();



}


void Topics::on_fashion_clicked()
{
    fashion f;
    f.setModal(true);
    f.exec();

}


void Topics::on_deforestation_clicked()
{
    deforestation d;
    d.setModal(true);
    d.exec();
}


void Topics::on_automotive_clicked()
{

    automotive d;
    d.setModal(true);
    d.exec();

}


void Topics::on_bitcoin_clicked()
{
    bitcoin d;
    d.setModal(true);
    d.exec();

}


void Topics::on_quit_clicked()
{
    hide();
    Survey d;
    d.setModal(true);
    d.exec();
}


void Topics::on_pushButton_clicked()
{
    hide();
    questionnaire1 q;
    q.setModal(true);
    q.exec();

}

