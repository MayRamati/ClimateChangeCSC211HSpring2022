#ifndef QUESTIONNAIRE1_H
#define QUESTIONNAIRE1_H

#include <QDialog>
#include <QObject>

namespace Ui {
class questionnaire1;
}

class questionnaire1 : public QDialog
{
    Q_OBJECT

public:
    explicit questionnaire1(QWidget *parent = nullptr);
    ~questionnaire1();
    bool check_input(QString);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_submit_clicked();

private:
    Ui::questionnaire1 *ui;
    bool button = false;

};

#endif // QUESTIONNAIRE1_H
