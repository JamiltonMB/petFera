#ifndef _AVES_H_
#define _AVES_H_

#include "animal.hpp"
#include <iostream>

class Aves : public Animal
{
protected:
    double tamanho_bico;
    double corPenas;

public:
    Aves(double tamanho_bico, double corPenas);
    Aves();
    ~Aves();

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    double getCorPenas() const;
    void setCorPenas(double corPenas);

    std::ostream &imprimirAves(std::ostream &os) const;
};

#endif