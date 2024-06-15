#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <stdexcept>
#include <string>


class DATA {
    private:
        std::string date;
        void validar(std::string);
    public:
        void setValor( std::string);
        std::string getValor() const;
};


inline std::string DATA::getValor() const {
    return date;
}


#endif // DATA_H_INCLUDED
