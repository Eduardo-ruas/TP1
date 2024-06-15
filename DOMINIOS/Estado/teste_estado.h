#ifndef TESTE_ESTADO_H_INCLUDED
#define TESTE_ESTADO_H_INCLUDED

#include "estado.h"

class TUestado {
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    estado *E;
    int status;
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
