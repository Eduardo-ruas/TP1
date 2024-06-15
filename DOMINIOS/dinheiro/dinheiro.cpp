#include "dinheiro.h"

// Método para validação do quantidade de dinheiro.
 void dinheiro::validar(double valor){

    if(valor > 1000000 || valor < 0)
        throw std::invalid_argument("insira um valor valido");

}

///M&eacute;todo para armazenamento de valor.
///
///@throw invalid_argument
void dinheiro::setValor(double valor){
    validar(valor);
    this->valor = valor;
}
