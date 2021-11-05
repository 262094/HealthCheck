#include "whr.h"
#include "ui_whr.h"
#include <QMessageBox>

Whr::Whr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Whr)
{
    ui->setupUi(this);
}

Whr::~Whr()
{
    delete ui;
}

void Whr::on_pushButton_back_to_menu_clicked()
{
    emit HomeClicked();
}


void Whr::on_pushButton_calculate_clicked()
{
    QString gender = ui ->comboBox->currentText();
      float wr = ui->lineEdit->text().toFloat();
      float hr = ui->lineEdit_2->text().toFloat();
      float whr = wr/hr;
      setStyleSheet("QMessageBox{background:white;  border: none; font-family: Arial; font-style: normal;  font-size: 15pt; color: black ; }");


      if(gender== "MEN")
      {
          if(whr > 1)
              QMessageBox::about(this,"WHR", QString("Your WHR is %1  You have the Apple shape: (high health risk)").arg(whr));
          if(whr < 1)
               QMessageBox::about(this,"WHR",QString("Your WHR is %1  You have the Pear shape (low health risk)").arg(whr));
          if(whr == 1)
              QMessageBox::about(this,"WHR",QString("Your WHR is %1  You have the ideal figure!").arg(whr));

      }


      if(gender== "WOMEN")
      {
          if(whr > 1)
              QMessageBox::about(this,"WHR", QString("Your WHR is %1. You have the Apple shape: (high health risk)").arg(whr));
          if(whr < 1)
               QMessageBox::about(this,"WHR",QString("Your WHR is %1 You have the Pear shape (low health risk)").arg(whr));
          if(whr == 1)
              QMessageBox::about(this,"WHR",QString("Your WHR is %1 You have the ideal figure!").arg(whr));

      }

}

