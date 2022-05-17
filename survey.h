#ifndef SURVEY_H
#define SURVEY_H
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDialog>


namespace Ui {
class Survey;
}

class Survey : public QDialog
{
    Q_OBJECT

public:
    explicit Survey(QWidget *parent = nullptr);
    ~Survey();


private slots:
    void on_exit_clicked();

private:
    Ui::Survey *ui;
};

#endif // SURVEY_H
