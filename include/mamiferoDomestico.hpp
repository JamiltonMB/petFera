#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero, public Domestico
{
public:
    inline MamiferoDomestico(size_t id, string nome, string sexo, int idade,
                             float peso, float comprimento, int patas, string especie, string tipo_pele,
                             string alimento, string silvestreOuExotico, string vetResponsavel,
                             string tratadorResponsavel, string cor_pelo, string dentes) {}
    ~MamiferoDomestico();
};

#endif