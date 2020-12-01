#pragma once

#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico : public Reptil, public Exotico
{
    public:
        ReptilExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,string alimento, string silvestreOuExotico,
                   string vetResponsavel,string tratadorResponsavel, bool troca_de_pele,
                   string pais_origem,string ameacadoDeEx,string habitat);
        virtual ~ReptilExotico(){}
};
