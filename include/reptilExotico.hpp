#pragma once

#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico : public Reptil, public Exotico
{
public:
    ReptilExotico(int id, string nome, string sexo, int idade, float peso, float comprimento,
                  string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
                  string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel, bool troca_de_pele, string pais_origem);
    virtual ~ReptilExotico() {}

    //std::ostream &imprimeDados(std::ostream &o);
};
