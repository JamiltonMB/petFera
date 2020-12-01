#pragma once

#include "mamifero.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamifero, public Exotico
{
public:
    inline MamiferoExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                           int patas, string especie, string tipo_pele,
                           string alimento, string silvestreOuExotico, string vetResponsavel,
                           string tratadorResponsavel, string cor_pelo, string dentes,
                           string pais_origem, string ameacadoDeEx, string habitat) : Mamifero(id, nome, sexo, idade, peso, comprimento, patas, especie, tipo_pele,
                                                                                               alimento, silvestreOuExotico, vetResponsavel,
                                                                                               tratadorResponsavel,
                                                                                               cor_pelo, dentes),
                                                                                      Exotico(pais_origem, ameacadoDeEx, habitat) {}
    ~MamiferoExotico();
};
