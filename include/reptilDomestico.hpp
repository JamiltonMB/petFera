#pragma once

#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico : public Reptil, public Domestico
{
public:
    ReptilDomestico(int id, string nome, string sexo, int idade, float peso, float comprimento,
                    string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
                    string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
                    string tratadorResponsavel, bool troca_de_pele);
    virtual ~ReptilDomestico() {}

    //std::ostream &imprimeDados(std::ostream &o);
};
