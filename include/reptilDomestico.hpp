#pragma once

#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico : public Reptil, public Domestico
{
public:
    ReptilDomestico(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele);
    virtual ~ReptilDomestico() {}

};
