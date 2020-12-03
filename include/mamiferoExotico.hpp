#pragma once
#include "mamifero.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamifero, public Exotico
{

public:
    MamiferoExotico(int id, string nome, string sexo, int idade, float peso, float comprimento,
                    string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
                    string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
                    string tratadorResponsavel, string cor_pelo, string dentes, string pais_origem);
    virtual ~MamiferoExotico() {}

    //std::ostream &imprimeDados(std::ostream &o);
};
