#pragma once

#include "Animal/animal.hpp"

class Anfibio : public Animal
{
protected:
    int total_mudas;

public:
     Anfibio(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, int total_mudas);
    
    Anfibio(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, int total_mudas);

    virtual ~Anfibio(){}
    int getMudas();
    void setMudas(int total_mudas);
};