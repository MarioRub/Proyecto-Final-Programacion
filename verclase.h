#ifndef VERCLASE_H
#define VERCLASE_H

#include <QMainWindow>

namespace Ui {
class VerClase;
}

class VerClase : public QMainWindow
{
    Q_OBJECT

public:
    explicit VerClase(QWidget *parent = 0);
    ~VerClase();

private:
    Ui::VerClase *ui;
};

#endif // VERCLASE_H
