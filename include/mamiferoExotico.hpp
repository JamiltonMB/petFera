#pragma once
#include "mamifero.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamifero, public Exotico
{

public:
    MamiferoExotico(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes, string pais_origem);
    virtual ~MamiferoExotico() {}

    //std::ostream &imprimeDados(std::ostream &o);
};
