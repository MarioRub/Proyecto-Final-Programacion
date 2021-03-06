
#include "Lista.h"
#include<iostream>
#include<cstring>
using namespace std;
Lista::Lista(int codigo,const char* nombre,int matriculados, int hora):Curso(codigo,nombre,matriculados,hora)
{

       inicio = 0;
       fin =  0;
}



Lista::~Lista()
{

    Curso * temp = inicio;

    while (inicio !=0){
        inicio = temp->getSiguiente();
        delete temp;
        temp= inicio;
    }


}

void Lista::insertarAlinicio(Curso * nuevo)
{
    if ( inicio == 0)
    {
        inicio = nuevo;
        fin = nuevo;
    }

    else{
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
    }
}

void Lista::insertarAlFinal(Curso * nuevo)
{
     if ( inicio == 0)
    {
        inicio = nuevo;
        fin = nuevo;
    }

    else{
        fin->setSiguiente(nuevo);
        fin = nuevo;
    }
}
