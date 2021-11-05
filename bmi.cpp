#include "bmi.h"
#include "ui_bmi.h"
#include <QMessageBox>


Bmi::Bmi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Bmi)
{
    ui->setupUi(this);
}

Bmi::~Bmi()
{
    delete ui;
}

void Bmi::on_pushButton_back_to_menu_clicked()
{
    emit HomeClicked();
}

void Bmi::on_pushButton_calculate_bmi_clicked()
{
    QString gender = ui ->comboBox->currentText();
    float height = ui->lineEdit->text().toFloat();
    float weight = ui->lineEdit_2->text().toFloat();
    float bmi = weight/((height*height)/10000.0);

    setStyleSheet("QMessageBox{background:white;  border: none; font-family: Arial; font-style: normal;  font-size: 15pt; color: black ; }");


    if(gender== "MEN")
    {
        if((bmi<16)&&(bmi>=0))
            QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Starvation! ").arg(bmi));
         if((bmi<17)&&(bmi>=16))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Emaciation!").arg(bmi));
         if((bmi<18.5)&&(bmi>=17))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Underweight!").arg(bmi));
         if((bmi<25)&&(bmi>=18.5))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Correct weight!").arg(bmi));
         if((bmi<30)&&(bmi>=25))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Overweight!").arg(bmi));
         if((bmi<35)&&(bmi>=30))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 First degree of obesity!").arg(bmi));
         if((bmi<40)&&(bmi>=35))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Second degree of obesity!").arg(bmi));
         if((bmi>=40))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Third degree of obesity!").arg(bmi));


    }


    if(gender== "WOMEN")
    {
        if((bmi<16)&&(bmi>=0))
            QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Starvation!").arg(bmi));
         if((bmi<17)&&(bmi>=16))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Emaciation!").arg(bmi));
         if((bmi<18.5)&&(bmi>=17))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Underweight!").arg(bmi));
         if((bmi<25)&&(bmi>=18.5))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Correct weight!").arg(bmi));
         if((bmi<30)&&(bmi>=25))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Overweight!").arg(bmi));
         if((bmi<35)&&(bmi>=30))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 First degree of obesity!").arg(bmi));
         if((bmi<40)&&(bmi>=35))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Second degree of obesity!").arg(bmi));
         if((bmi>=40))
             QMessageBox::about(this,"BMI", QString ("Your BMI: %1 Third degree of obesity!").arg(bmi));


    }

}
