#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_3_clicked() //nacisniecie przycisku 3 powoduje powrot na strone glowna
{
    emit HomeClicked();
}
