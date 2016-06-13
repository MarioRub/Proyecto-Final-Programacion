#include "Curso.h"
#include<iostream>
#include<cstring>

using namespace std;


Curso::Curso(int codigo, const char* nombre, int matriculados, int hora)
{
      this->setCodigo(codigo);
      this->nombre= new char[strlen(nombre) +1];
      strcpy(this->nombre,nombre);
      this->setMatriculados(matriculados);
      this->setHora(hora);

      siguiente = NULL;
      anterior = NULL;
}

Curso::~Curso()
{
    //dtor
    codigo = 0;
    matriculados = 0;
    hora = 1;
    siguiente = NULL;
    anterior = NULL;
    delete[] this->nombre;
}

void Curso::setSiguiente(Curso* nuevo)
{
<<<<<<< HEAD
    this->setSiguiente() = nuevo;
=======
 this->setSiguiente(nuevo);
>>>>>>> origin/MarioRub

}

Curso* Curso::getSiguiente()
{
 return siguiente;
}

void Curso::setAnterior(Curso* nuevo)
{
<<<<<<< HEAD
    this->setAnterior() = nuevo;
=======
    this->setAnterior(nuevo);
>>>>>>> origin/MarioRub
}

Curso* Curso::getAnterior()
{
    return anterior;
}

void Curso::setCodigo(int codigo)
{
    if (codigo>=0)
        this->codigo= codigo;
    else
        this->codigo=0;

}

void Curso::setMatriculados(int matriculados)
{
    if (matriculados>=0)
        this->matriculados= matriculados;
    else
        this->matriculados=0;
}

void Curso::setHora(int)
{
    if( hora >= 1 && hora <=24)
        this->hora = hora;
    else
        this->hora = 1;
}

void Curso::setNombre(const char* nombre)
{
    delete[] this->nombre;
    this->nombre= new char [strlen(nombre) + 1];
    strcpy(this->nombre,nombre);
}

const char* Curso::getNombre() const
{
 return nombre;
}

int Curso::getCodigo() const
{
    return codigo;
}

int Curso::getMatriculados() const
{
    return matriculados;
}

int Curso::getHora() const
{
    return hora;
}

<<<<<<< HEAD
void Curso::getCupo() const
=======
int Curso::getCupo() const
>>>>>>> origin/MarioRub
{
    return 0;
}
