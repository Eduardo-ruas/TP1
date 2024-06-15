#include "data.h"
#include <iostream>
#include <sstream>

// Fun��o para verificar se um ano � bissexto
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

// Fun��o para validar a data no formato DD-MM-AAAA
void DATA::validar( std::string date) {
    int day, month, year;
    char delimiter1, delimiter2;

    // Usando stringstream para analisar a string de data
    std::istringstream dateStream(date);
    if (!(dateStream >> day >> delimiter1 >> month >> delimiter2 >> year)) {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");
  // Se falhar ao ler a data
    }

    // Verifica se os delimitadores est�o corretos
    if (delimiter1 != '-' || delimiter2 != '-') {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

    // Verificar se o ano, m�s e dia est�o dentro dos limites aceit�veis
    if (year < 1 || month < 1 || month > 12 || day < 1) {
       throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

    // Dias em cada m�s
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Ajustar para fevereiro em ano bissexto
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    // Verificar se o dia � v�lido para o m�s
    if (day > daysInMonth[month - 1]) {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

}

void DATA::setValor(std::string date){
    validar(date);
    this->date = date;
}
