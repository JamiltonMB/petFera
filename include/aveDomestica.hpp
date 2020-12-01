#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "aves.hpp"
#include "domestico.hpp"

class AveDomestica : public Aves , public Domestico
{
<<<<<<< HEAD
public:
    AveDomestica(size_t id, string nome, string sexo, int idade, float peso, 
                float comprimento, int patas, string especie, string tipo_pele,
                string alimento, string silvestreOuExotico, string vetResponsavel,
                string tratadorResponsavel, double tamanho_bico, string corPenas);
    virtual ~AveDomestica(){}
=======
    public:
    AveDomestica();
    ~AveDomestica();
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif
