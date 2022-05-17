#include "climatechange.h"
#include "ui_climatechange.h"
#include <QFile>
#include <QTextStream>

ClimateChange::ClimateChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClimateChange)
{
    ui->setupUi(this);
    QFile file("C:/Users/mayra/Documents/finalproject/about");

    if(!file.open(QFile:: ReadOnly | QFile :: Text))
    {
        qCritical() << "file not found";

    }
       QTextStream stream(&file);
       QString text = stream.readAll();
       ui->label->setText(text);
       file.close();

}

ClimateChange::~ClimateChange()
{
    delete ui;
}
