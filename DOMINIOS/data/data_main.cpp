#include <iostream>

//cabe�alhos:
// - 20 no total, (10 dom�nios, 10 testes de dom�nios)
// (Incluir o endere�o do arquivo: "Dominios/DOMINIOX/DOMINIOX.cpp")

//Obs.: Comecei incluindo os headers (como no exemplo).

#include "C:\Users\Eduardo\Documents\DOMINIOS\data\data.h"
#include "C:\Users\Eduardo\Documents\DOMINIOS\data\teste_data.h"


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

//--------------------------- Teste DATA -----------------------
    TUdata testedt;

    switch(testedt.run()){
        case TUdata::SUCESSO: cout << "SUCESSO" << endl;

        case TUdata::FALHA  : cout << "FALHA" << endl;

    }


    return 0;
}
