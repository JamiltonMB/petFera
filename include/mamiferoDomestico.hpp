#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero , public Domestico
{

public:
    MamiferoDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                      string habitat, int patas, string especie, string tipo_pele,
                      string tipo_reproducao, string alimento, bool ameacadoDeEx,
                      string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes);
    virtual ~MamiferoDomestico(){}

    //std::ostream&imprimeDados(std::ostream &o);

};

#endif