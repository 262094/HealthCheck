#ifndef DIETS_H
#define DIETS_H

#include <QWidget>

namespace Ui {
class Diets;
}

class Diets : public QWidget
{
    Q_OBJECT

public:
    explicit Diets(QWidget *parent = nullptr);
    ~Diets();

private:
    Ui::Diets *ui;

private slots:
    void on_pushButton_3_clicked();

signals:
    void HomeClicked();

};

#endif // DIETS_H
