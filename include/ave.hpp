#ifndef _Ave_H_
#define _Ave_H_

#include "animal.hpp"
#include <iostream>

class Ave : public Animal
{
protected:
    double tamanho_bico;
    double corPenas;

public:
    Ave(double tamanho_bico, double corPenas);
    Ave();
    ~Ave();

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    double getCorPenas() const;
    void setCorPenas(double corPenas);

    std::ostream &imprimirAve(std::ostream &os) const;
};

#endif