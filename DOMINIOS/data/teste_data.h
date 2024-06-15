#ifndef TESTE_DATA_H_INCLUDED
#define TESTE_DATA_H_INCLUDED

#include "data.h"




class TUdata {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    DATA *d;
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
