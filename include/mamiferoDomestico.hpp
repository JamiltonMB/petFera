#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "mamiferos.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamiferos , public Domestico
{
<<<<<<< HEAD
public:
    inline MamiferoDomestico(size_t id, string nome, string sexo, int idade,
                             float peso, float comprimento, int patas, string especie, string tipo_pele,
                             string alimento, string silvestreOuExotico, string vetResponsavel,
                             string tratadorResponsavel, string cor_pelo, string dentes);
    virtual ~MamiferoDomestico(){}
=======
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif