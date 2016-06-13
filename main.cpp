#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "curso.h"
#include "clase.h"
#include "laboratorio.h"
#include "lista.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    cout<<"Hello World"<<endl;

    return a.exec();

}
