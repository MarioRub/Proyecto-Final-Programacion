#ifndef LISTA_H
#define LISTA_H


class Lista
{
    public:
        Lista(char *);
        virtual ~Lista();

        void insertarAlinicio(Curso *);
        void insertarAlFinal(Curso *);
        void agregarCurso(int,const char*,int, int);
        void guardarArchivoAleatorio();
        void leerArchivoAleatorio();


    protected:
         Curso * inicio;
         Curso * fin;

    private:
        char  nombreArchivo[30];

};

#endif // LISTA_H
