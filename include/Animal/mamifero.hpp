#pragma once

#include <iostream>
#include "Animal/animal.hpp"
using std::string;
class Mamifero : public Animal
{
protected:
    string cor_pelo;
    string dentes; //se possui dentes desenvolvidos
    //string tipo_mamifero;
public:
    Mamifero(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes);
    
    Mamifero(string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes);
  
    virtual ~Mamifero() {}

    std::string getCorPelo();
    void setCorPelo(std::string cor_pelo);

    std::string getDentes();
    void setDentes(std::string dentes);
};
