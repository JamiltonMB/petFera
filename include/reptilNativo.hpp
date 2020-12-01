#pragma once

#include "reptil.hpp"
#include "nativo.hpp"

class RepteisNativo : public Reptil, public Nativo
{
public:
    inline RepteisNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                         int patas, string especie, string tipo_pele,
                         string alimento, string silvestreOuExotico, string vetResponsavel,
                         string tratadorResponsavel, bool troca_de_pele, string licenca_IBAMA, string UF_origem,
                         string ameacadoDeEx, string habitat) : Reptil(id, nome, sexo, idade, peso, comprimento,
                                                                       patas, especie, tipo_pele, alimento, silvestreOuExotico, vetResponsavel,
                                                                       tratadorResponsavel, troca_de_pele),
                                                                Nativo(licenca_IBAMA, UF_origem,
                                                                       ameacadoDeEx, habitat) {}
    ~RepteisNativo();
};
