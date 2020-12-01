#pragma once

#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo : public Mamifero, public Nativo
{
public:
    MamiferoNativo(size_t id, string nome, string sexo, int idade, float peso,
                          float comprimento, int patas, string especie, string tipo_pele,
                          string alimento, string silvestreOuExotico, string vetResponsavel,
                          string tratadorResponsavel, string cor_pelo, string dentes,
                          string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                          string habitat);
    virtual ~MamiferoNativo(){}
};
