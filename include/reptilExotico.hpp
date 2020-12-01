#pragma once

#include "reptil.hpp"
#include "exotico.hpp"

class RepteisExotico : public Reptil, public Exotico
{
    public:
        inline RepteisExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,string alimento, string silvestreOuExotico,
                   string vetResponsavel,string tratadorResponsavel, bool troca_de_pele,
                   string pais_origem,string ameacadoDeEx,string habitat) 
                   :Reptil(id, nome, sexo, idade, peso, comprimento, patas, especie, tipo_pele, alimento, 
                   silvestreOuExotico, vetResponsavel, tratadorResponsavel,troca_de_pele),
                   Exotico(pais_origem, ameacadoDeEx, habitat) {}
        virtual ~RepteisExotico();
};
