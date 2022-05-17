#ifndef FOOD_H
#define FOOD_H

#include "topics.h"
#include <QDialog>

namespace Ui {
class food;
}

class food : public QDialog
{
    Q_OBJECT

public:
    explicit food(QWidget *parent = nullptr);
    ~food();


private slots:
    void on_link1_clicked();

    void on_link2_clicked();

    void on_link3_clicked();

    void on_link4_clicked();

    void on_link5_clicked();

private:
    Ui::food *ui;

};

#endif // FOOD_H
