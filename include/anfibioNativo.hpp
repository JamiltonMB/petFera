#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIV0_H_

#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibio, public Nativo
{
public:
    AnfibioNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                  string habitat, int patas, string especie, string tipo_pele,
                  string tipo_reproducao, string alimento, bool ameacadoDeEx,
                  string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas, string licenca_IBAMA, string UF_origem);
    virtual ~AnfibioNativo() {}

    //std::ostream&imprimeDados(std::ostream &o);
};

#endif