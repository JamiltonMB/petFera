#pragma once

#include "ave.hpp"
#include "nativo.hpp"

class AveNativo : public Ave, public Nativo
{
public:
    AveNativo(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, double tamanho_bico, string corPenas,
                     string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                     string habitat);
    virtual ~AveNativo(){}
};
