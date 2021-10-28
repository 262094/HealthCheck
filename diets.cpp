#include "diets.h"
#include "ui_diets.h"

Diets::Diets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diets)
{
    ui->setupUi(this);
}

Diets::~Diets()
{
    delete ui;
}

void Diets::on_pushButton_3_clicked() //nacisniecie przycisku 3 powoduje powrot na strone glowna
{
    emit HomeClicked();
}
