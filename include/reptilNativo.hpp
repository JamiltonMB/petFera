#pragma once

#include "reptil.hpp"
#include "nativo.hpp"

class ReptilNativo : public Reptil, public Nativo
{
public:
    ReptilNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                  int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel, bool troca_de_pele, string licenca_IBAMA, string UF_origem,
                  string ameacadoDeEx, string habitat);
    virtual ~ReptilNativo(){}
};
