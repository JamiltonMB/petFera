#pragma once

#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico : public Reptil, public Exotico
{
public:
    ReptilExotico(size_t id,string nome, string sexo, int idade, float peso, 
        float comprimento, string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo,
        bool troca_de_pele, string pais_origem);

    ReptilExotico(string nome, string sexo, int idade, float peso, 
        float comprimento, string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo,
        bool troca_de_pele, string pais_origem);

    virtual ~ReptilExotico() {}

};
