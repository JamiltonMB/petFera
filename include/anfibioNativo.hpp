#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIV0_H_

#include "anfibios.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibios, public Nativo
{
public:
<<<<<<< HEAD
    AnfibioNativo(size_t id, string nome, string sexo, int idade, float peso,
                  float comprimento, int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem,
                  string ameacadoDeEx, string habitat);
    virtual ~AnfibioNativo(){}
=======
    AnfibioNativo();
    ~AnfibioNativo();
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif