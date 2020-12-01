#pragma once

#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave, public Domestico
{
public:
    AveDomestica(size_t id, string nome, string sexo, int idade, float peso, 
                float comprimento, int patas, string especie, string tipo_pele,
                string alimento, string silvestreOuExotico, string vetResponsavel,
                string tratadorResponsavel, double tamanho_bico, string corPenas);
    virtual ~AveDomestica(){}
};

