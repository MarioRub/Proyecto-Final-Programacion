#ifndef CLASE_H
#define CLASE_H


class clase
{
public:
    clase();



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
