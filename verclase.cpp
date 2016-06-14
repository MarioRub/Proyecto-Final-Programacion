#include "verclase.h"
#include "ui_verclase.h"

VerClase::VerClase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VerClase)
{
    ui->setupUi(this);
}

VerClase::~VerClase()
{
    delete ui;
}
