#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregarclase.h"
#include "verclase.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::abrirAgregarClase(){
    AgregarClase *agregarClase=new AgregarClase();
    agregarClase->show();

}
void MainWindow::abrirVerClase(){
    VerClase *verclase=new VerClase();
    verclase->show();
}
