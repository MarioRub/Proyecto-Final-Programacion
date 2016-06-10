#ifndef LABORATORIO_H
#define LABORATORIO_H


class laboratorio
{
public:
    laboratorio();
    void setno_Laboratorio(int);
    void setInstructor(char *);
    int getno_Laboratorio const;
    char * getInstructor const;
private:
    char * no_Laboratorio;
    int instructor;
};

#endif // LABORATORIO_H
