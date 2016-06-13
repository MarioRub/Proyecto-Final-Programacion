#include "laboratorio.h"
#include<iostream>
#include<cstring>
using namespace std;
laboratorio::laboratorio(int codigo,const char* nombre,int matriculados, int hora,char* no_laboratorio,int instructor): Curso(codigo,nombre,matriculados,hora)
{
    no_Laboratorio=0;
    delete[] this->instructor;
}

void laboratorio::setno_Laboratorio(int no_Laboratorio){
    if(no_Laboratorio>0 && no_Laboratorio<=10)
        this->no_Laboratorio = no_Laboratorio;
    else
        this->no_Laboratorio=1;
}

void laboratorio::setInstructor(char * instructor){
    delete[] this->instructor;
    this->instructor= new char [strlen(instructor) + 1];
    strcpy(this->instructor,instructor);
}

int laboratorio::getno_Laboratorio() const{

    return no_Laboratorio;
}


const char * laboratorio::getInstructor() const{
    return instructor;
}
