#ifndef HEALTCHECK_H
#define HEALTCHECK_H

#include <QMainWindow>
#include <whr.h>
#include <bmi.h>
#include <diet.h>
#include <liczeniebmi.h>


QT_BEGIN_NAMESPACE
namespace Ui { class HealtCheck; }
QT_END_NAMESPACE

class HealtCheck : public QMainWindow
{
    Q_OBJECT

public:
    HealtCheck(QWidget *parent = nullptr);
    ~HealtCheck();

private slots:
    void on_pushButton_whr_clicked();
    void moveHome();
    void on_pushButton_bmi_clicked();
    void on_pushButton_diets_clicked();

    void on_pushButton_athlets_clicked();

    void on_pushButton_back_to_menu_clicked();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    Ui::HealtCheck *ui;

    Whr whr;
    Bmi bmi;
    Diet diet;

    QString file_path_;
};
#endif // HEALTCHECK_H
