#ifndef DEFORESTATION_H
#define DEFORESTATION_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class deforestation;
}

class deforestation : public QDialog
{
    Q_OBJECT

public:
    explicit deforestation(QWidget *parent = nullptr);
    ~deforestation();

private slots:
    void on_link1_clicked();

    void on_link2_clicked();

    void on_link3_clicked();

private:
    Ui::deforestation *ui;
};

#endif // DEFORESTATION_H
