#include "data.h"
#include <iostream>
#include <sstream>

// Função para verificar se um ano é bissexto
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

// Função para validar a data no formato DD-MM-AAAA
void DATA::validar( std::string date) {
    int day, month, year;
    char delimiter1, delimiter2;

    // Usando stringstream para analisar a string de data
    std::istringstream dateStream(date);
    if (!(dateStream >> day >> delimiter1 >> month >> delimiter2 >> year)) {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");
  // Se falhar ao ler a data
    }

    // Verifica se os delimitadores estão corretos
    if (delimiter1 != '-' || delimiter2 != '-') {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

    // Verificar se o ano, mês e dia estão dentro dos limites aceitáveis
    if (year < 1 || month < 1 || month > 12 || day < 1) {
       throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

    // Dias em cada mês
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Ajustar para fevereiro em ano bissexto
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    // Verificar se o dia é válido para o mês
    if (day > daysInMonth[month - 1]) {
        throw std::invalid_argument("INSIRA UM VALOR VALIDO");

    }

}

void DATA::setValor(std::string date){
    validar(date);
    this->date = date;
}
