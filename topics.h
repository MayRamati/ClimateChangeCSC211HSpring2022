#ifndef TOPICS_H
#define TOPICS_H

#include <QDialog>

namespace Ui {
class Topics;
}

class Topics : public QDialog
{
    Q_OBJECT

public:
    explicit Topics(QWidget *parent = nullptr);
    ~Topics();

private slots:
    void on_food_clicked();

    void on_fashion_clicked();

    void on_deforestation_clicked();

    void on_automotive_clicked();

    void on_bitcoin_clicked();

    void on_quit_clicked();

    void on_pushButton_clicked();

private:
    Ui::Topics *ui;
};

#endif // TOPICS_H
