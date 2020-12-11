#pragma once

#include "animal.hpp"
#include <iostream>

class Ave : public Animal
{
protected:
    float tamanho_bico;
    string corPenas;

public:
    Ave(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas);

    virtual ~Ave(){}

    float getTamanhoBico() const;
    void setTamanhoBico(float tamanho_bico);

    string getCorPenas() const;
    void setCorPenas(string corPenas);
};
