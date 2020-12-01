#pragma once
#include <iostream>
#include "animal.hpp"

class Reptil : public Animal
{
protected:
    bool troca_de_pele;

public:
    Reptil(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,
                   string alimento, string silvestreOuExotico, string vetResponsavel,
                   string tratadorResponsavel, bool troca_de_pele);
    virtual ~Reptil(){}
    bool getTrocaDePele() const;
    void setTrocaDePele(bool troca_de_pele);

    std::ostream &imprimirReptil(std::ostream &os) const;
};
