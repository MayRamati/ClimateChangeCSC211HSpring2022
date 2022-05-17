#include "survey.h"
#include "ui_survey.h"

Survey::Survey(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Survey)
{
    ui->setupUi(this);
}

Survey::~Survey()
{
    delete ui;
}

void Survey::on_exit_clicked()
{

  QFile file("survey.txt");
  QTextStream stream (&file);
  QString st,q,f;
  if(!file.open(QIODevice :: ReadWrite))
  {
      qCritical() << "could not open file";
  }

        file.write(QByteArray("SURVEY\n"));
        q=ui->survey_2->text();
        st = ui->question1->toPlainText();

        stream << q << "\n" << st << "\n\n";

        q=ui->survey_3->text();
        st = ui->question2->toPlainText();
        stream << q << "\n" << st << "\n\n";

        q= ui->survey_4->text();
        f= ui->label->text();
        st = ui->food->toPlainText();
        stream << q << "\n" << f << ": " << st << "\n\n";

        f= ui->label_2->text();
        st = ui->fashion->toPlainText();
        stream << f << ": " << st << "\n\n";

        f= ui->label_3->text();
        st = ui->Deforestation->toPlainText();
        stream << f << ": " << st << "\n\n";

        f= ui->label_4->text();
        st = ui->automotive->toPlainText();
        stream << f << ": " << st << "\n\n";

        f= ui->label_5->text();
        st = ui->bitcoin->toPlainText();
        stream << f << ": " << st << "\n\n";

        file.flush();
        file.close();
        hide();
  }




