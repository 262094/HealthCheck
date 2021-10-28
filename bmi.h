#ifndef BMI_H
#define BMI_H

#include <QWidget>

namespace Ui {
class bmi;
}

class bmi : public QWidget
{
    Q_OBJECT

public:
    explicit bmi(QWidget *parent = nullptr);
    ~bmi();

private slots:
void on_pushButton_3_clicked();

private:
    Ui::bmi *ui;

signals:
    void HomeClicked();


};

#endif // BMI_H
