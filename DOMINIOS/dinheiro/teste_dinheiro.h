#ifndef TESTE_DINHEIRO_H_INCLUDED
#define TESTE_DINHEIRO_H_INCLUDED

#include "dinheiro.h"

class TUdinheiro {
private:
    const static double VALOR_VALIDO;
    const static double VALOR_INVALIDO;
    dinheiro *d;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


#endif // TESTE_CODIGODEPAGAMENTO_H_INCLUDED
