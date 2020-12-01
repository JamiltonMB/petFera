#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include <iostream>
#include "animal.hpp"

class Mamifero : public Animal
{
protected:
    std::string cor_pelo;
    std::string dentes; //se possui dentes desenvolvidos
    //string tipo_mamifero;
public:
    Mamifero(std::string cor_pelo, std::string dentes);
    Mamifero();
    virtual ~Mamifero();

    std::string getCorPelo();
    void setCorPelo(std::string cor_pelo);

    std::string getDentes();
    void setDentes(std::string dentes);

    std::ostream &imprimirMamifero(std::ostream &os) const;
};

#endif