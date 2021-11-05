#include "diet.h"
#include "ui_diet.h"

Diet::Diet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Diet)
{
    ui->setupUi(this);
}

Diet::~Diet()
{
    delete ui;
}

void Diet::on_pushButton_back_to_menu_clicked()
{
    emit HomeClicked();
}
