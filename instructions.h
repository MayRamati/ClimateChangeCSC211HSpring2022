#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"

namespace Ui  {
class instructions;
}

class instructions : public QDialog{

    Q_OBJECT

public:
    explicit instructions(QWidget *parent = nullptr);
    ~instructions();

private:
    Ui::instructions *ui;
//    person user_name;
};

#endif // INSTRUCTIONS_H
