#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIV0_H_

#include "anfibio.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibio, public Nativo
{
public:

    AnfibioNativo(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento,string ameacadoDeEx ,string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem);
    virtual ~AnfibioNativo(){}

};

#endif