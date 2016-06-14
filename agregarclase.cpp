#include "agregarclase.h"
#include "ui_agregarclase.h"

AgregarClase::AgregarClase(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AgregarClase)
{
    ui->setupUi(this);
}

AgregarClase::~AgregarClase()
{
    delete ui;
}
