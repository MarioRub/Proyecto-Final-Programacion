#include "clase.h"

clase::clase()
{
    delete[] this->catedratico;
    aula=0;
    dias=0;
}


void clase::setAula(int aula){
   if(aula>0 && aula=<50)
    this->aula=aula;
   else
       aula=0;
}

int clase::getAula() const{
    return aula;
}
void clase::setDias(int dia){
    if(dias>0)
    this->dias=dias;
    else
        dias=0;
}

int clase::getDias() const{
    return dias;
}
void clase::setCatedratico(char * catedratico){
    delete[] this->catedratico;
    this->catedratico= new char [strlen(catedratico) + 1];
    strcpy(this->catedratico,catedratico);
}

char * clase::getCatedratico() const{
    return catedratico;
}
