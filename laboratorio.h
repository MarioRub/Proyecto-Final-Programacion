#ifndef LABORATORIO_H
#define LABORATORIO_H
#include"curso.h"

class laboratorio:public Curso
{
public:
    laboratorio(int,const char*,int, int,char*,int);
    void setno_Laboratorio(int);
    void setInstructor(char*);
    int getno_Laboratorio() const;
    const char * getInstructor() const;
    virtual int getCupo() const;
    void imprimir()const;

private:
    char * instructor;
    int no_Laboratorio;
};

#endif // LABORATORIO_H
