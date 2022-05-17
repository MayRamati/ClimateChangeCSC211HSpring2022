#ifndef QUESTIONNAIRE_H
#define QUESTIONNAIRE_H

#include <QDialog>

namespace Ui {
class questionnaire;
}

class questionnaire : public QDialog
{
    Q_OBJECT

public:
    explicit questionnaire(QWidget *parent = nullptr);
    ~questionnaire();

//private slots:
//    void on_textEdit_textChanged();

private slots:
    void on_checkBox_clicked();

private:
    Ui::questionnaire *ui;
};

#endif // QUESTIONNAIRE_H
