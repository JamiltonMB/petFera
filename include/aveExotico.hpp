#pragma once

#include "ave.hpp"
#include "exotico.hpp"

class AveExotico : public Ave, public Exotico
{
public:
    AveExotico(size_t id, string nome, string sexo, int idade, float peso,
                      float comprimento, int patas, string especie, string tipo_pele,
                      string alimento, string silvestreOuExotico, string vetResponsavel,
                      string tratadorResponsavel, double tamanho_bico, string corPenas,
                      string pais_origem, string ameacadoDeEx, string habitat);
    virtual ~AveExotico(){}
};

