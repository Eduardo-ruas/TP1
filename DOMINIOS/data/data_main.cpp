#include <iostream>

//cabeçalhos:
// - 20 no total, (10 domínios, 10 testes de domínios)
// (Incluir o endereço do arquivo: "Dominios/DOMINIOX/DOMINIOX.cpp")

//Obs.: Comecei incluindo os headers (como no exemplo).

#include "C:\Users\Eduardo\Documents\DOMINIOS\data\data.h"
#include "C:\Users\Eduardo\Documents\DOMINIOS\data\teste_data.h"


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

//--------------------------- Teste DATA -----------------------
    TUdata testedt;

    switch(testedt.run()){
        case TUdata::SUCESSO: cout << "SUCESSO" << endl;

        case TUdata::FALHA  : cout << "FALHA" << endl;

    }


    return 0;
}
