#pragma once

#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico : public Reptil,public Domestico{
    public:
        ReptilDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,
                   string alimento, string silvestreOuExotico, string vetResponsavel,
                   string tratadorResponsavel, bool troca_de_pele);
        virtual ~ReptilDomestico(){}
};
