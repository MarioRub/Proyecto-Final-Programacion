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




void AgregarClase::on_comboBoxEleccion_activated(int index)
{
    //index=ui->comboBoxEleccion->currentIndex();
}
