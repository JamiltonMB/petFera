#pragma once

#include "anfibio.hpp"
#include "exotico.hpp"

class AnfibioExotico : public Anfibio, public Exotico
{
public:
    AnfibioExotico(size_t id, string nome, string sexo, int idade, float peso,
                  float comprimento, int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel,int total_mudas,string pais_origem, 
                  string ameacadoDeEx, string habitat);
    virtual ~AnfibioExotico(){}
};

