#include "teste_estado.h"

const string TUestado::VALOR_VALIDO = "Liquidado";
const string TUestado::VALOR_INVALIDO = "previsivel";


void TUestado::setUp(){
    E = new estado();
    status = SUCESSO;
}

void TUestado::tearDown(){
    delete E;
}

void TUestado::testarCenarioSucesso(){
    try{
        E->setValor(VALOR_VALIDO);
        if (E->getValor() != VALOR_VALIDO)
            status = FALHA;
    }
    catch(std::invalid_argument &excecao){
        status = FALHA;
    }
}

void TUestado::testarCenarioFalha(){
    try{
        E->setValor(VALOR_INVALIDO);
        status = FALHA;
    }
    catch(std::invalid_argument &excecao){
        /*
        if(codigodp->getValor == VALOR_INVALIDO){
            estado = FALHA;
        }
        */
    }
}

int TUestado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return status;
}
