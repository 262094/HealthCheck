#include "healtcheck.h"
#include "ui_healtcheck.h"


#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>






HealtCheck::HealtCheck(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HealtCheck)
{
    ui->setupUi(this);





     ui -> stackedWidget-> insertWidget(1, &whr);
     ui -> stackedWidget-> insertWidget(2, &bmi);
     ui -> stackedWidget-> insertWidget(3, &diet);

     connect(&whr, SIGNAL(HomeClicked()), this, SLOT(moveHome()));

        connect(&bmi, SIGNAL(HomeClicked()), this, SLOT(moveHome()));

            connect(&diet, SIGNAL(HomeClicked()), this, SLOT(moveHome()));

}

 //user code




HealtCheck::~HealtCheck()
{
    delete ui;
}


void HealtCheck::on_pushButton_whr_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void HealtCheck::on_pushButton_bmi_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void HealtCheck::on_pushButton_diets_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}


void HealtCheck::moveHome()
{
      ui->stackedWidget->setCurrentIndex(0);
}





void HealtCheck::on_pushButton_athlets_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}


void HealtCheck::on_pushButton_back_to_menu_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}


void HealtCheck::on_actionNew_triggered()
{
    file_path_ = "";
     ui->textEdit->setText("Share your day today here:  Describe your day: ""\n"
                           "\n"
                           "Date of data entry:   ""\n"
                           "Your age:   " "\n"
                           "Your weight:   ""\n"
                           "Your height:   ""\n"
                           "Your BMI:   ""\n"
                           "Your WHR:   ""\n"  );

}


void HealtCheck::on_actionOpen_triggered()
{
    QString file_open = QFileDialog::getOpenFileName(this,"Open the file");
     QFile file(file_open);
     file_path_ = file_open;
     if(!file.open(QFile::ReadOnly | QFile::Text)) {
         QMessageBox::warning(this,"..","The file has not been opened");
         return;
       }
     QTextStream in(&file);
     QString text = in.readAll();
     ui->textEdit->setText(text);
     file.close();
}


void HealtCheck::on_actionSave_triggered()
{
    QFile file(file_path_);
      if(!file.open(QFile::WriteOnly | QFile::Text)) {
          QMessageBox::warning(this,"..","The file has not been opened");
          return;
        }
      QTextStream out(&file);
      QString text = ui->textEdit->toPlainText();
      out << text;
      file.flush();
      file.close();
}


void HealtCheck::on_actionSave_as_triggered()
{
    QString file_open = QFileDialog::getSaveFileName(this,"Open the file");
     QFile file(file_open);
     file_path_ = file_open;
     if(!file.open(QFile::WriteOnly | QFile::Text)) {
         QMessageBox::warning(this,"..","The file has not been opened");
         return;
       }
     QTextStream out(&file);
     QString text = ui->textEdit->toPlainText();
     out << text;
     file.flush();
     file.close();
}


void HealtCheck::on_actionCut_triggered()
{
     ui->textEdit->cut();
}


void HealtCheck::on_actionCopy_triggered()
{
     ui->textEdit->copy();
}


void HealtCheck::on_actionPaste_triggered()
{
     ui->textEdit->paste();
}


void HealtCheck::on_actionUndo_triggered()
{
     ui->textEdit->undo();
}


void HealtCheck::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

