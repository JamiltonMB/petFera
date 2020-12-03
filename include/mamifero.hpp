#pragma once

#include <iostream>
#include "animal.hpp"
using std::string;
class Mamifero : public Animal
{
protected:
    string cor_pelo;
    string dentes; //se possui dentes desenvolvidos
    //string tipo_mamifero;
public:
    Mamifero(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, string cor_pelo, string dentes);
    virtual ~Mamifero(){}

    std::string getCorPelo();
    void setCorPelo(std::string cor_pelo);

    std::string getDentes();
    void setDentes(std::string dentes);

    virtual std::ostream& imprimeDados(std::ostream& o) const = 0;
};
