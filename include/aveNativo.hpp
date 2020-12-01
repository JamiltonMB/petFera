#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "aves.hpp"
#include "nativo.hpp"

class AveNativo : public Aves , public Nativo
{
<<<<<<< HEAD
public:
    AveNativo(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, double tamanho_bico, string corPenas,
                     string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                     string habitat);
    virtual ~AveNativo(){}
=======
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif