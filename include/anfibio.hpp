#pragma once

#include "animal.hpp"

class Anfibio : public Animal
{
protected:
    int total_mudas;

public:
     Anfibio(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas);
    virtual ~Anfibio(){}
    int getMudas();
    void setMudas(int total_mudas);
    virtual std::ostream& imprimeDados(std::ostream& o, Animal const &func)=0;
};