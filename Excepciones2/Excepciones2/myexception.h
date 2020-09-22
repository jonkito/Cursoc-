#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <string>

using namespace std;

class myException
{
    public:
        myException(string m="Error"){mensaje = m;}
        virtual ~myException(){}
        string mostrarMensaje(){return mensaje;}

    protected:

    private:
        string mensaje;
};

#endif // MYEXCEPTION_H
