#include "teste_dinheiro.h"

const double TUdinheiro::VALOR_VALIDO = 10000;
const double TUdinheiro::VALOR_INVALIDO = -1;

void TUdinheiro::setUp(){
    d = new dinheiro();
    estado = SUCESSO;
}

void TUdinheiro::tearDown(){
    delete d;
}

void TUdinheiro::testarCenarioSucesso(){
    try{
        d->setValor(VALOR_VALIDO);
        if (d->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUdinheiro::testarCenarioFalha(){
    try{
        d->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        /*
        if(codigodp->getValor == VALOR_INVALIDO){
            estado = FALHA;
        }
        */
    }
}

int TUdinheiro::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
