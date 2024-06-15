#include <iostream>

//cabeçalhos:
// - 20 no total, (10 domínios, 10 testes de domínios)
// (Incluir o endereço do arquivo: "Dominios/DOMINIOX/DOMINIOX.cpp")

//Obs.: Comecei incluindo os headers (como no exemplo), mas por algum motivo não estava incluindo os cpps
//#include "Dominios/CodigoDePagamento/CodigoDePagamento.h"
//#include "Dominios/CodigoDePagamento/teste_CodigoDePagamento.h"

#include "C:/Users/Eduardo/Documents/dinheiro/dinheiro/dinheiro.h"
#include "C:/Users/Eduardo/Documents/dinheiro/dinheiro/teste_dinheiro.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de código para instanciar e executar teste de unidade.
/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar método e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

//--------------------------- Teste CodigoDePagamento -----------------------
    TUdinheiro testedinheiro;

    switch(testedinheiro.run()){
        case TUdinheiro::SUCESSO: cout << "SUCESSO" << endl;
                                //break;
        case TUdinheiro::FALHA: cout << "FALHA" << endl;
                                //break;
    }

    return 0;
}
