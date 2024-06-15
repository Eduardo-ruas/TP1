#ifndef CODIGODEPAGAMENTO_H_INCLUDED
#define CODIGODEPAGAMENTO_H_INCLUDED

#include <stdexcept>


class dinheiro {
    private:
        double valor;
        void validar(double);
    public:
        void setValor(double);
        double getValor() const;
};

///M&eacute;todo para retornar o valor armazenado.
///@return C&oacute;digo de pagamento.
inline double dinheiro::getValor() const {
    return valor;
}


#endif // CODIGODEPAGAMENTO_H_INCLUDED
