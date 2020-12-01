#pragma once

#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibio, public Nativo
{
public:
    AnfibioNativo(size_t id, string nome, string sexo, int idade, float peso,
                  float comprimento, int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem,
                  string ameacadoDeEx, string habitat);
    virtual ~AnfibioNativo(){}
};
