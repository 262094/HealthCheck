#include "liczeniewhr.h"
#include <QMessageBox>


liczeniewhr::liczeniewhr(QString gender, float wr, float hr)
{


    float whr = round((wr/hr)*100)/100;


    if(gender== "MEN")
    {
        if(whr > 1)
            QMessageBox::about(licz2,"WHR", QString("Your WHR is %1  You have an apple-shaped body type").arg(whr));
        if(whr < 1)
             QMessageBox::about(licz2,"WHR",QString("Your WHR is %1  You have an pear-shaped body type").arg(whr));
        if(whr == 1)
            QMessageBox::about(licz2,"WHR",QString("Your WHR is %1  You have the perfect body type").arg(whr));

    }

    if(gender== "WOMEN")
    {
        if(whr > 0.8f)
            QMessageBox::about(licz2,"WHR", QString("Your WHR is %1 You have an apple-shaped body type").arg(whr));
        if(whr < 0.8f)
             QMessageBox::about(licz2,"WHR",QString("Your WHR is %1 You have an pear-shaped body type").arg(whr));
        if(whr == 0.8f)
            QMessageBox::about(licz2,"WHR",QString("Your WHR is %1 You have the perfect body type").arg(whr));

    }


}
