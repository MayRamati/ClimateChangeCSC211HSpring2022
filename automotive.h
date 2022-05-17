#ifndef AUTOMOTIVE_H
#define AUTOMOTIVE_H

#include <QDialog>

namespace Ui {
class automotive;
}

class automotive : public QDialog
{
    Q_OBJECT

public:
    explicit automotive(QWidget *parent = nullptr);
    ~automotive();

private slots:
    void on_link1_clicked();

    void on_link2_clicked();

private:
    Ui::automotive *ui;
};

#endif // AUTOMOTIVE_H
