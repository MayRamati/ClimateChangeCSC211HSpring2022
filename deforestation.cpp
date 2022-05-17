#include "deforestation.h"
#include "ui_deforestation.h"
#include <QDesktopServices>
#include <QUrl>

deforestation::deforestation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deforestation)
{
    ui->setupUi(this);
//    QFile file("C:/Users/mayra/Documents/finalproject/Deforestation");

//    if(!file.open(QFile:: ReadOnly | QFile :: Text))
//    {
//        qCritical() << "file not found";

//    }

//       QTextStream stream(&file);
//       QString line1 = stream.readLine();
//       ui->plainTextEdit->setPlainText(line1);

//       QString line2 = stream.readLine();
//       ui->plainTextEdit_2->setPlainText(line2);

//       QString line3 = stream.readLine();
//       ui->plainTextEdit_3->setPlainText(line3);
//       file.close();



}

deforestation::~deforestation()
{
    delete ui;
}

void deforestation::on_link1_clicked()
{

     QString link= "https://www.nationalgeographic.org/encyclopedia/deforestation/";
     QDesktopServices :: openUrl(QUrl(link));

}


void deforestation::on_link2_clicked()
{

    QString link= "https://www.greenpeace.org/usa/forests/solutions-to-deforestation/";
    QDesktopServices :: openUrl(QUrl(link));
}


void deforestation::on_link3_clicked()
{
     QString link="https://greentumble.com/15-strategies-to-reduce-deforestation/";
     QDesktopServices :: openUrl(QUrl(link));
}

