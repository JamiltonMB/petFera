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
    Mamifero(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                    int patas, string especie, string tipo_pele,
                    string alimento, string silvestreOuExotico, string vetResponsavel,
                    string tratadorResponsavel, string cor_pelo, string dentes);
    virtual ~Mamifero(){}

    std::string getCorPelo();
    void setCorPelo(std::string cor_pelo);

    std::string getDentes();
    void setDentes(std::string dentes);

    std::ostream &imprimirMamifero(std::ostream &os) const;
};
