#include "questionnaire2.h"
#include "ui_questionnaire2.h"
#include "questionnaire1.h"

questionnaire2::questionnaire2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::questionnaire2)
{
    ui->setupUi(this);
}

questionnaire2::~questionnaire2()
{
    delete ui;
}

void questionnaire2::on_pushButton2_clicked()
{
   // question6
    if (ui->question6->toPlainText() == "1")
    {
        sum_fashion += 1;
    }

    if (ui->question6->toPlainText()=="2")
    {
        sum_fashion += 2;
        count++;
    }
    if (ui->question6->toPlainText()=="3")
    {
        sum_fashion += 3;
    }

}



void questionnaire2::on_pushButton_clicked()
{
    ui->fashionResult->setNum(count);
}

