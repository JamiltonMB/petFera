#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.hpp"
#include "nativo.hpp"

class AveNativo : public Ave, public Nativo
{
public:
    inline AveNativo(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, double tamanho_bico, double corPenas,
                     string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                     string habitat)
        : Ave(id, nome, sexo, idade, peso, comprimento,
              patas, especie, tipo_pele,
              alimento, silvestreOuExotico, vetResponsavel,
              tratadorResponsavel, tamanho_bico, corPenas),
          Nativo(licenca_IBAMA, UF_origem, ameacadoDeEx,
                 habitat) {}
    virtual ~AveNativo();
};

#endif