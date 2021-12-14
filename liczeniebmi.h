#ifndef LICZENIEBMI_H
#define LICZENIEBMI_H
#include <QMainWindow>
#include <healtcheck.h>
#include <QWidget>
#include <QObject>


class liczeniebmi {

public:
 liczeniebmi( QString gender, float height, float weight);

private:

 Bmi *licz;

};

#endif // LICZENIEBMI_H

