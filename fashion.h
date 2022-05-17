#ifndef FASHION_H
#define FASHION_H

#include <QDialog>

namespace Ui {
class fashion;
}

class fashion : public QDialog
{
    Q_OBJECT

public:
    explicit fashion(QWidget *parent = nullptr);
    ~fashion();

private slots:
    void on_link1_clicked();

    void on_link2_clicked();

    void on_link3_clicked();

    void on_link4_clicked();

private:
    Ui::fashion *ui;
};

#endif // FASHION_H
