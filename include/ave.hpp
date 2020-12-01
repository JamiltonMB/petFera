#pragma once

#include "animal.hpp"
#include <iostream>

class Ave : public Animal
{
protected:
    double tamanho_bico;
    string corPenas;

public:
    Ave(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
               int patas, string especie, string tipo_pele,
               string alimento, string silvestreOuExotico, string vetResponsavel,
               string tratadorResponsavel, double tamanho_bico, string corPenas);
    virtual ~Ave(){}

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    string getCorPenas() const;
    void setCorPenas(string corPenas);

    std::ostream &imprimirAve(std::ostream &os) const;
};