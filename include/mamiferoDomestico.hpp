#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero , public Domestico
{

public:
    inline MamiferoDomestico(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, string cor_pelo, string dentes);
    virtual ~MamiferoDomestico(){}

    std::ostream&imprimeDados(std::ostream &o);

};

#endif