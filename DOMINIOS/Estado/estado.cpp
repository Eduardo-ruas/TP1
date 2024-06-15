#include "estado.h"
#include <string>


//função que verificca se o estado inserido pelo usuario é valido
 void estado::validar(string ESTADO){

    if(ESTADO != "Previsto" && ESTADO!= "Liquidado" && ESTADO !="Inadimplente"){
        throw std::invalid_argument("insira um estado valido");
    }

}

void estado::setValor(string ESTADO){
    validar(ESTADO);
    this->ESTADO = ESTADO;
}

