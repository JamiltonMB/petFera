#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamiferos.hpp"
#include "nativo.hpp"

<<<<<<< HEAD
class MamiferoNativo : public Mamifero, public Nativo
{
public:
    MamiferoNativo(size_t id, string nome, string sexo, int idade, float peso,
                          float comprimento, int patas, string especie, string tipo_pele,
                          string alimento, string silvestreOuExotico, string vetResponsavel,
                          string tratadorResponsavel, string cor_pelo, string dentes,
                          string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                          string habitat);
    virtual ~MamiferoNativo(){}
=======
class MamiferoNativo : public Mamiferos , public Nativo{
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif