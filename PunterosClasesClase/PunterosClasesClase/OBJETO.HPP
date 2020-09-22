#ifndef OBJETO_H
#define OBJETO_H


class Objeto
{
    public:
        Objeto();
        Objeto(float);
        virtual ~Objeto();

        int atributo;
        Objeto (int atributo);
        int devuelveAlgo();
        int getValorPunteroPrivado();
        float* punteroFloat;

    protected:

    private:
        int* privado;
        float valorFloat;
};

#endif // OBJETO_H
