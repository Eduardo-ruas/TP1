#include "estado.h"
#include <string>


//fun��o que verificca se o estado inserido pelo usuario � valido
 void estado::validar(string ESTADO){

    if(ESTADO != "Previsto" && ESTADO!= "Liquidado" && ESTADO !="Inadimplente"){
        throw std::invalid_argument("insira um estado valido");
    }

}

void estado::setValor(string ESTADO){
    validar(ESTADO);
    this->ESTADO = ESTADO;
}

