#include "liczeniebmi.h"
#include <QMessageBox>






 liczeniebmi:: liczeniebmi( QString gender, float height, float weight)
{

     float bmi = (round((weight/((height*height)/10000.0))*100)/100);

    if(gender== "MEN")
    {

        if((bmi<16)&&(bmi>=0))
            QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Starvation! ").arg(bmi));
         if((bmi<17)&&(bmi>=16))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Emaciation!").arg(bmi));
         if((bmi<18.5)&&(bmi>=17))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Underweight!").arg(bmi));
         if((bmi<25)&&(bmi>=18.5))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Correct weight!").arg(bmi));
         if((bmi<30)&&(bmi>=25))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Overweight!").arg(bmi));
         if((bmi<35)&&(bmi>=30))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 First degree of obesity!").arg(bmi));
         if((bmi<40)&&(bmi>=35))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Second degree of obesity!").arg(bmi));
         if((bmi>=40))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Third degree of obesity!").arg(bmi));


    }





    if(gender== "WOMEN")
    {
        if((bmi<16)&&(bmi>=0))
            QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Starvation!").arg(bmi));
         if((bmi<17)&&(bmi>=16))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Emaciation!").arg(bmi));
         if((bmi<18.5)&&(bmi>=17))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Underweight!").arg(bmi));
         if((bmi<25)&&(bmi>=18.5))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Correct weight!").arg(bmi));
         if((bmi<30)&&(bmi>=25))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Overweight!").arg(bmi));
         if((bmi<35)&&(bmi>=30))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 First degree of obesity!").arg(bmi));
         if((bmi<40)&&(bmi>=35))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Second degree of obesity!").arg(bmi));
         if((bmi>=40))
             QMessageBox::about(licz,"BMI", QString ("Your BMI: %1 Third degree of obesity!").arg(bmi));


}
}
