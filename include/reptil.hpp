#pragma once
#include <iostream>
#include "animal.hpp"

class Reptil : public Animal
{
protected:
    bool troca_de_pele;

public:
    Reptil(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, bool troca_de_pele);
    virtual ~Reptil(){}
    bool getTrocaDePele() const;
    void setTrocaDePele(bool troca_de_pele);

    virtual std::ostream& imprimeDados(std::ostream& o) const = 0;
};
