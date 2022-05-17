#include "instructions.h"
#include "ui_instructions.h"
#include <QFile>
#include <QTextStream>

instructions::instructions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::instructions)
{
      ui->setupUi(this);

     QFile file("C:/Users/mayra/Documents/finalproject/instructions");

        if(!file.open(QFile:: ReadOnly | QFile :: Text))
        {
            qCritical() << "file not found";

        }
           QTextStream stream(&file);
           QString text = stream.readAll();
           ui->label->setText(text);
           file.close();

}

instructions::~instructions()
{
    delete ui;
}
