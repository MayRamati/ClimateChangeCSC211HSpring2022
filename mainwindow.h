#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public person
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual void print_name(){}

    ~MainWindow();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_log_in_button_clicked();

private:
    Ui::MainWindow *ui;
    person user_name;
};
#endif // MAINWINDOW_H
