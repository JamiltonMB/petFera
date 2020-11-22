#ifndef _AVES_H_
#define _AVES_H_

#include "animal.hpp"
#include <iostream>

class Aves : public Animal
{
protected:
    double tamanho_bico;
    double envergadura_asas;
    std::ostream &listar_animais(std::ostream &os) const;
    std::ofstream &salvar_animais(std::ofstream &out) const;

public:
    Aves(double tamanho_bico, double envergadura_asas);
    Aves();
    ~Aves();

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    double getEnvergaduraAsas() const;
    void setEnvergaduraAsas(double envergadura_asas);

    std::ostream &Aves::imprimirAves(std::ostream &os) const;
};

#endif