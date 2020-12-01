#pragma once

#include "anfibio.hpp"
#include "domestico.hpp"

class AnfibioDomestico : public Domestico, public Anfibio
{
public:
   AnfibioDomestico(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, int total_mudas);
    virtual ~AnfibioDomestico(){}
};
