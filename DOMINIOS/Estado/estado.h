#ifndef ESTADO_H_INCLUDED
#define ESTADO_H_INCLUDED
#include <iostream>
#include <stdexcept>

using namespace std;

class estado {
    private:
        string ESTADO;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string estado::getValor() const {
    return ESTADO;
}


#endif // CODIGODEPAGAMENTO_H_INCLUDED
