#include "questionnaire.h"
#include "ui_questionnaire.h"


questionnaire::questionnaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::questionnaire)
{
    ui->setupUi(this);
}

questionnaire::~questionnaire()
{
    delete ui;
}




void questionnaire::on_checkBox_clicked()
{

}

