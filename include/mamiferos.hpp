#ifndef _MAMIFEROS_H_
#define _MAMIFEROS_H_

#include <iostream>
#include "animal.hpp"

class Mamiferos : public Animal
{
protected:
    std::string cor_pelo;
    std::string dentes; //se possui dentes desenvolvidos
    //string tipo_mamifero;
public:
    Mamiferos(std::string cor_pelo, std::string dentes);
    Mamiferos();
    ~Mamiferos();

    std::string getCorPelo();
    void setCorPelo(std::string cor_pelo);

    std::string getDentes();
    void setDentes(std::string dentes);

    std::ostream &imprimirMamifero(std::ostream &os) const;
};

#endif