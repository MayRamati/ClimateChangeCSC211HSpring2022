#ifndef QUESTIONNAIRE2_H
#define QUESTIONNAIRE2_H
#include "questionnaire1.h"

#include <QDialog>

namespace Ui {
class questionnaire2;
}

class questionnaire2 : public QDialog
{
    Q_OBJECT

public:
    explicit questionnaire2(QWidget *parent = nullptr);
    ~questionnaire2();

private slots:
    void on_pushButton2_clicked();

    void on_pushButton_clicked();

private:
    Ui::questionnaire2 *ui;
};

#endif // QUESTIONNAIRE2_H
