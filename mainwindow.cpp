#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "climatechange.h"
#include "questionnaire1.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setStyleSheet("background-image: url(:/image/earth2.jpg);");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    ClimateChange climatechange;
    climatechange.setModal(true);
    climatechange.exec();

}

void MainWindow::on_pushButton_2_clicked()
{

    hide();
    questionnaire1 question;
    question.setModal(true);
    question.exec();


}

void MainWindow::on_log_in_button_clicked()
{
    QString name = ui->text_edit_name->toPlainText();
    user_name.set_name(name);
    QString welcome = "Welcome ";
    welcome += user_name.get_name();
    ui->label_welcome->setText(welcome);
}

