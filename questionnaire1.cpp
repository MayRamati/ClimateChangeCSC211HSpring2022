#include "questionnaire1.h"
#include "ui_questionnaire1.h"
#include "questionnaire2.h"
#include "instructions.h"
#include "topics.h"
#include <iostream>
#include <QWidget>


questionnaire1::questionnaire1(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::questionnaire1)
{
    ui->setupUi(this);

}

questionnaire1::~questionnaire1()
{

    delete ui;
}

//question1

void questionnaire1::on_pushButton_clicked()
{

   if(button)
   {

    const int SIZE = 5;
    int sum_food = 0, sum_fashion=0, sum_forest=0,sum_auto=0,sum_bitcoin=0;
    int arr[SIZE];
    QString st;

//question1
     if (ui->question1->toPlainText()=="1")
     {
       sum_food += 1;
     }

     if (ui->question1->toPlainText()=="2")
     {
        sum_food += 2;
      }
      if (ui->question1->toPlainText()=="3")
      {
        sum_food += 3;
      }

  //question2


      if (ui->question2->toPlainText()=="1")
      {
         sum_food += 1;
      }

      if (ui->question2->toPlainText()=="2")
      {
         sum_food += 2;
      }

      if (ui->question2->toPlainText()=="3")
      {
         sum_food += 3;
      }


//question 3

     if (ui->question3->toPlainText()=="1")
     {
         sum_food += 1;

     }

     if (ui->question3->toPlainText()=="2")
     {
         sum_food += 2;
     }
     if (ui->question3->toPlainText()=="3")
     {
         sum_food += 3;
     }

     //question4

     if (ui->question4->toPlainText() == "1")
     {
         sum_fashion += 1;
     }

     if (ui->question4->toPlainText()=="2")
     {
         sum_fashion += 2;
     }
     if (ui->question4->toPlainText()=="3")
     {
         sum_fashion += 3;
     }

     //question5
     if (ui->question5->toPlainText() == "1")
     {
         sum_fashion += 1;
     }

     if (ui->question5->toPlainText()=="2")
     {
         sum_fashion += 2;
     }

     //question6
     if (ui->question6->toPlainText() == "1")
     {
         sum_fashion += 1;
     }

     if (ui->question6->toPlainText()=="2")
     {
         sum_fashion += 2;
     }
     if (ui->question6->toPlainText()=="3")
     {
         sum_fashion += 3;
     }


     //question7
     if (ui->question7->toPlainText() == "1")
     {
         sum_forest += 1;
     }

     if (ui->question7->toPlainText()=="2")
     {
         sum_forest += 2;
     }

     //question8
     if (ui->question8->toPlainText() == "1")
     {
         sum_forest += 1;
     }

     if (ui->question8->toPlainText()=="2")
     {
         sum_forest += 2;
     }

     //question9
     if (ui->question9->toPlainText() == "1")
     {
         sum_forest += 1;
     }

     if (ui->question9->toPlainText()=="2")
     {
         sum_forest += 2;
     }

     //question10
     if (ui->question10->toPlainText() == "1")
     {
         sum_auto += 1;
     }

     if (ui->question10->toPlainText() =="2")
     {
         sum_auto += 2;
     }

     //question11
     if (ui->question11->toPlainText() == "1")
     {
         sum_auto += 1;
     }

     if (ui->question11->toPlainText()=="2")
     {
         sum_auto += 2;
     }

     //question12
     if (ui->question12->toPlainText() == "1")
     {
         sum_auto += 1;
     }

     if (ui->question12->toPlainText()=="2")
     {
         sum_auto += 2;
     }
     //question13
     if (ui->question13->toPlainText() == "1")
     {
         sum_auto += 1;
     }

     if (ui->question13->toPlainText()=="2")
     {
         sum_auto += 2;
     }

     //question14
     if (ui->question14->toPlainText() == "1")
     {
         sum_bitcoin += 1;
     }

     if (ui->question14->toPlainText()=="2")
     {
         sum_bitcoin += 2;
     }


     //question15
     if (ui->question15->toPlainText() == "1")
     {
         sum_bitcoin += 1;
     }

     if (ui->question15->toPlainText()=="2")
     {
         sum_bitcoin += 2;
     }

arr[0] = sum_food;
arr[1] = sum_fashion;
arr[2] = sum_forest;
arr[3] = sum_auto;
arr[4] = sum_bitcoin;


  if(arr[0] <= 5 || arr[1]<=5 || arr[2] <=4 || arr[3] <=6 || arr[4] < 4)
     {

    st = "Based on your personal questionnaire:\n";
    ui->label_8->setText(st);


       if(arr[0] >= 3 && arr[0]<=5)
    {
        st += "I recommend you to explore more about the food industry\n";
        ui->label_8->setText(st);
    }
    else
    {
        st+= "The environmental impact of your food print is good!\n";
        ui->label_8->setText(st);
    }



    if(arr[1] >= 3 && arr[1]<=5)
    {
        st += "I recommend you to explore more about the fashion industry\n";
        ui->label_8->setText(st);
    }
    else
    {
        st+= "The environmental impact of your wardrobe is good!\n";
        ui->label_8->setText(st);
    }


    if(arr[2] >= 3 && arr[2]<=4)
    {
        st += "I recommend you to explore more about the deforestation industry\n";
        ui->label_8->setText(st);
    }
    else
    {
        st+= "The environmental impact of your paper use is good!\n";
        ui->label_8->setText(st);
    }

    if(arr[3] >= 4 && arr[3]<=6)
    {
        st += "I recommend you to explore more about the automotive industry\n";
        ui->label_8->setText(st);
    }
    else
    {
        st+= "The environmental impact of your vehicle use is good!\n";
        ui->label_8->setText(st);
    }

    if(arr[4] >= 2 && arr[4] < 4)
    {
        st += "I recommend you to explore more about the Bitcoin";
        ui->label_8->setText(st);
    }
    else
    {
        st+= "You are conscious of the impact Bitcoin has on the environment\n";
        ui->label_8->setText(st);
    }

   }

     else
     {
        st = "Based on the personal questionnaire,\n you have a good impact on the environment :)\nbut it is always good to explore more\n";
         ui->label_8->setText(st);
     }
   }

   else
   {
       ui->label_8->setText("Please click submit first");
   }
}




bool questionnaire1 :: check_input(QString input)
{
    QString msg="";
    if(input != "1" && input != "2" && input != "3" )
    {
        msg += "Invalid number at one of your answers\nplease type again the answers' number";
        throw QString(msg);
    }
    else
    {
        msg+= "Please click on 'Your level of impact on the environment'";
        ui->label_8->setText(msg);
        return true;
    }
}

void questionnaire1::on_pushButton_3_clicked()
{

    instructions n;
    n.setModal(true);
    n.exec();

}


void questionnaire1::on_pushButton_2_clicked()
{
    hide();
    Topics topic;
    topic.setModal(true);
    topic.exec();
}


void questionnaire1::on_submit_clicked()
{
    button = true;
    QString input;
    try
    {
        input = ui->question1->toPlainText();
        check_input(input);
        input = ui->question2->toPlainText();
        check_input(input);
        input = ui->question3->toPlainText();
        check_input(input);
        input = ui->question4->toPlainText();
        check_input(input);
        input = ui->question5->toPlainText();
        check_input(input);
        input = ui->question6->toPlainText();
        check_input(input);
        input = ui->question7->toPlainText();
        check_input(input);
        input = ui->question8->toPlainText();
        check_input(input);
        input = ui->question9->toPlainText();
        check_input(input);
        input = ui->question10->toPlainText();
        check_input(input);
        input = ui->question11->toPlainText();
        check_input(input);
        input = ui->question12->toPlainText();
        check_input(input);
        input = ui->question13->toPlainText();
        check_input(input);
        input = ui->question14->toPlainText();
        check_input(input);
        input = ui->question15->toPlainText();
        check_input(input);


    }
    catch (QString msg)
    {
         ui->label_8->setText(msg);
    }


}

