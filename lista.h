#ifndef LISTA_H
#define LISTA_H
#include"curso.h"

class Lista:public Curso
{
    public:
        Lista(int,const char*,int, int);
        virtual ~Lista();

        void insertarAlinicio(Curso *);
        void insertarAlFinal(Curso *);
        void guardarArchivoAleatorio();
        void leerArchivoAleatorio();


    protected:
         Curso * inicio;
         Curso * fin;

    private:

};

#endif // LISTA_H
