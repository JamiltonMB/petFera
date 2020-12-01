#ifndef _ANFIBIO_DOMESTICO_H_
#define _ANFIBIO_DOMESTICO_H_

#include "anfibios.hpp"
#include "domestico.hpp"

class AnfibioDomestico : public Domestico, public Anfibios
{
<<<<<<< HEAD
public:
   AnfibioDomestico(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, int total_mudas);
    virtual ~AnfibioDomestico(){}
=======
    public:
    AnfibioDomestico();
    ~AnfibioDomestico();
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif