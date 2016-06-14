#ifndef AGREGARCLASE_H
#define AGREGARCLASE_H

#include <QMainWindow>

namespace Ui {
class AgregarClase;
}

class AgregarClase : public QMainWindow
{
    Q_OBJECT

public:
    explicit AgregarClase(QWidget *parent = 0);
    ~AgregarClase();

private:
    Ui::AgregarClase *ui;
};

#endif // AGREGARCLASE_H
