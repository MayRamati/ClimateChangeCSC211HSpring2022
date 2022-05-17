#ifndef BITCOIN_H
#define BITCOIN_H

#include <QDialog>

namespace Ui {
class bitcoin;
}

class bitcoin : public QDialog
{
    Q_OBJECT

public:
    explicit bitcoin(QWidget *parent = nullptr);
    ~bitcoin();

private slots:
    void on_link1_clicked();

private:
    Ui::bitcoin *ui;
};

#endif // BITCOIN_H
