#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIV0_H_

#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibio, public Nativo
{
public:
    inline AnfibioNativo(size_t id, string nome, string sexo, int idade, float peso,
                  float comprimento, int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem,
                  string ameacadoDeEx, string habitat) : Anfibio(id, nome, sexo, idade, peso,
                                                                 comprimento, patas, especie, tipo_pele, alimento, silvestreOuExotico,
                                                                 vetResponsavel, tratadorResponsavel, total_mudas),
                                                         Nativo(licenca_IBAMA, UF_origem,
                                                                ameacadoDeEx, habitat) {}
    ~AnfibioNativo();
};

#endif