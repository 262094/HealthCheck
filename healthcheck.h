#ifndef HEALTHCHECK_H
#define HEALTHCHECK_H

#include <QMainWindow>
#include <calculator.h>
#include <bmi.h>
#include <diets.h>

QT_BEGIN_NAMESPACE
namespace Ui { class HealthCheck; }
QT_END_NAMESPACE

class HealthCheck : public QMainWindow
{
    Q_OBJECT

public:
    HealthCheck(QWidget *parent = nullptr);
    ~HealthCheck();

private slots:
    void on_pushButton_clicked();
    void moveHome();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::HealthCheck *ui;
    Calculator Calculate;
    bmi Calc;
    Diets Diet;
};
#endif // HEALTHCHECK_H
