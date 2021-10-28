#include "healthcheck.h"
#include "ui_healthcheck.h"
#include <QPixmap>

HealthCheck::HealthCheck(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HealthCheck)
{
    ui->setupUi(this);

    //USER CODE HERE

    QPixmap pix("C:/Qt/Projekty/sport.png");

    ui->label_pic->setPixmap(pix.scaled(201,211,Qt::KeepAspectRatio));


    ui->stackedWidget->insertWidget(1, &Calculate); // przechodzenie do kalk whr
     ui->stackedWidget->insertWidget(2, &Calc); //przechodzenie do kalk bmi
        ui->stackedWidget->insertWidget(3, &Diet); //przechodzenie do diet

    connect(&Calculate, SIGNAL(HomeClicked()), this, SLOT(moveHome())); //powrot do menu glownego z kalkulatora whr
     connect(&Calc, SIGNAL(HomeClicked()), this, SLOT(moveHome())); //polaczenie przycisku by wrocic z bmi do glownego
     connect(&Diet, SIGNAL(HomeClicked()), this, SLOT(moveHome())); //polaczenie przycisku by wrocic z diet do glownego
}

HealthCheck::~HealthCheck()
{
    delete ui;
}


void HealthCheck::on_pushButton_clicked() //FUNKCJA PRZEJSCIA NA STRONE whr
{
    ui->stackedWidget->setCurrentIndex(1); //1 strona widzetu
}

void HealthCheck::moveHome() //FUNKCJA POWROTU NA STRONE 0
{
   ui->stackedWidget->setCurrentIndex(0);
}



void HealthCheck::on_pushButton_2_clicked() //FUNKCJA PRZEJSCIA NA STRONE bmi
{
    ui->stackedWidget->setCurrentIndex(2); //1 strona widzetu
}


void HealthCheck::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

