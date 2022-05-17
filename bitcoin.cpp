#include "bitcoin.h"
#include "ui_bitcoin.h"
#include <QDesktopServices>
#include <QUrl>

bitcoin::bitcoin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bitcoin)
{
    ui->setupUi(this);
}

bitcoin::~bitcoin()
{
    delete ui;
}

void bitcoin::on_link1_clicked()
{
    QString link= "https://news.climate.columbia.edu/2021/09/20/bitcoins-impacts-on-climate-and-the-environment/";
    QDesktopServices :: openUrl(QUrl(link));
}

