#include <iostream>

//cabe�alhos:
// - 20 no total, (10 dom�nios, 10 testes de dom�nios)
// (Incluir o endere�o do arquivo: "Dominios/DOMINIOX/DOMINIOX.cpp")

//Obs.: Comecei incluindo os headers (como no exemplo), mas por algum motivo n�o estava incluindo os cpps
//#include "Dominios/CodigoDePagamento/CodigoDePagamento.h"
//#include "Dominios/CodigoDePagamento/teste_CodigoDePagamento.h"

#include "C:/Users/Eduardo/Documents/dinheiro/Estado/estado.h"
#include "C:/Users/Eduardo/Documents/dinheiro/Estado/teste_estado.h"

using namespace std;

int main()
{

//---------------------------------------------------------------------------
// Estrutura de c�digo para instanciar e executar teste de unidade.
/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar m�todo e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

//--------------------------- Teste CodigoDePagamento -----------------------
    TUestado testeEstado;

    switch(testeEstado.run()){
        case TUestado::SUCESSO: cout << "SUCESSO" << endl;

        case TUestado::FALHA: cout << "FALHA" << endl;

    }

    return 0;
}
