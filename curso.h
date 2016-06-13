#ifndef CURSO_H
#define CURSO_H


class Curso
{
    public:
        Curso(int,const char*,int, int);
        virtual ~Curso();

        void setSiguiente(Curso *);
        Curso * getSiguiente();
        void setAnterior(Curso *);
        Curso * getAnterior();

        void setCodigo(int);
        void setMatriculados(int);
        void setHora(int);
        void setNombre(const char*);

        const char * getNombre() const;
        int getCodigo() const;
        int getMatriculados() const;
        int getHora() const;


        virtual void getCupo() const =0;




    protected:

    private:

        int codigo;
        char * nombre;
        int matriculados;
        int hora;
        Curso * siguiente;
        Curso * anterior;

};

#endif // CURSO_H

