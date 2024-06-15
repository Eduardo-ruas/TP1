#include "teste_data.h"

const std::string TUdata::VALOR_VALIDO = "13-02-2004";
const std::string TUdata::VALOR_INVALIDO = "13022004";

void TUdata::setUp(){
    d = new DATA();
    estado = SUCESSO;
}

void TUdata::tearDown(){
    delete d;
}

void TUdata::testarCenarioSucesso(){
    try{
        d->setValor(VALOR_VALIDO);
        if (d->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(std::invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUdata::testarCenarioFalha(){
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

int TUdata::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
