#ifndef _REPTEIS_H_
#define _REPTEIS_H_
#include <iostream>
#include "animal.hpp"

class Repteis : public Animal
{
protected:
    bool troca_de_pele;

public:
    Repteis(bool troca_de_pele);
    Repteis();
    ~Repteis();
    bool getTrocaDePele() const;
    void setTrocaDePele(bool troca_de_pele);

    std::ostream &Repteis::imprimirRepteis(std::ostream &os) const;
};

#endif