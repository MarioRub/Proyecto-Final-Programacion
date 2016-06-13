#ifndef CLASE_H
#define CLASE_H


class clase: public Curso
{
public:
    clase(int,const char*,int, int,int,int, char*);
    void setAula(int);
    int getAula() const;
    void setDias(int);
    int getDias() const;
    void setCatedratico(char *);
    char * getCatedratico() const;


private:
    int aula;
    int dias;
    char * catedratico;
};

#endif // CLASE_H
