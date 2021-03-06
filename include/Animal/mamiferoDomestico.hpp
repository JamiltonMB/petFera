#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "Animal/mamifero.hpp"
#include "Animal/domestico.hpp"

class MamiferoDomestico : public Mamifero , public Domestico
{

public:
    MamiferoDomestico(size_t id, string nome, string sexo, int idade, float peso, 
        float comprimento, string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
        string cor_pelo, string dentes);

    MamiferoDomestico(string nome, string sexo, int idade, float peso, 
        float comprimento, string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
        string cor_pelo, string dentes);

    virtual ~MamiferoDomestico(){}


};

#endif