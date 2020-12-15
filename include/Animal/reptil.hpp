#pragma once
#include <iostream>
#include "Animal/animal.hpp"

class Reptil : public Animal
{
protected:
    bool troca_de_pele;

public:
    Reptil(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
           bool troca_de_pele);

    Reptil(string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
           bool troca_de_pele);

    virtual ~Reptil(){}
    bool getTrocaDePele() const;
    void setTrocaDePele(bool troca_de_pele);
};
