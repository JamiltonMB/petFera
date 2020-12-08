#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo : public Mamifero, public Nativo
{
public:
    MamiferoNativo(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes, string licenca_IBAMA,
                   string UF_origem);
    virtual ~MamiferoNativo() {}

    //std::ostream &imprimeDados(std::ostream &o);
};

#endif