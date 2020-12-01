#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave, public Domestico
{
public:
    AveDomestica(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                 int patas, string especie, string tipo_pele,
                 string alimento, string silvestreOuExotico, string vetResponsavel,
                 string tratadorResponsavel, double tamanho_bico, double corPenas)
        : Ave(id, nome, sexo, idade, peso, comprimento,
              patas, especie, tipo_pele,
              alimento, silvestreOuExotico, vetResponsavel,
              tratadorResponsavel, tamanho_bico, corPenas) {}
    ~AveDomestica();
};

#endif
