#ifndef CLASE_H
#define CLASE_H
#include "curso.h"

class clase: public Curso
{
public:
    clase(int,const char*,int, int,int,int,const char*);
    void setAula(int);
    int getAula() const;
    void setDias(int);
    int getDias() const;
    void setCatedratico(char *);
    const char * getCatedratico() const;


private:
    int aula;
    int dias;
    char * catedratico;
};

#endif // CLASE_H
