#ifndef CLASS_H
#define CLASS_H


class Class
{
    public:
        Class();
        virtual ~Class();

        int Getplazas() { return plazas; }
        void Setplazas(int val) { plazas = val; }
        int GetplazasOcupadas() { return plazasOcupadas; }
        void SetplazasOcupadas(int val) { plazasOcupadas = val; }

    protected:

    private:
        int plazas;
        int plazasOcupadas;
};

#endif // CLASS_H
