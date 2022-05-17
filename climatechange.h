#ifndef CLIMATECHANGE_H
#define CLIMATECHANGE_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"

namespace Ui {
class ClimateChange;
}

class ClimateChange : public QDialog
{
    Q_OBJECT

public:
    explicit ClimateChange(QWidget *parent = nullptr);
    ~ClimateChange();

private:
    Ui::ClimateChange *ui;
};

#endif // CLIMATECHANGE_H
