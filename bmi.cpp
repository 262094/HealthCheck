#include "bmi.h"
#include "ui_bmi.h"

bmi::bmi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bmi)
{
    ui->setupUi(this);
}

bmi::~bmi()
{
    delete ui;
}

void bmi::on_pushButton_3_clicked() //nacisniecie przycisku 3 powoduje powrot na strone glowna
{
    emit HomeClicked();
}
