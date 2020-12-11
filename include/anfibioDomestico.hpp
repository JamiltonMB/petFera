#ifndef _ANFIBIO_DOMESTICO_H_
#define _ANFIBIO_DOMESTICO_H_

#include "anfibio.hpp"
#include "domestico.hpp"

class AnfibioDomestico : public Domestico, public Anfibio
{
public:
    AnfibioDomestico(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas);
    virtual ~AnfibioDomestico() {}
};

#endif