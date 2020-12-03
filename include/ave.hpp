#pragma once

#include "animal.hpp"
#include <iostream>

class Ave : public Animal
{
protected:
    double tamanho_bico;
    string corPenas;

public:
    Ave(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas);

    virtual ~Ave(){}

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    string getCorPenas() const;
    void setCorPenas(string corPenas);
    std::ostream& imprimeDados(std::ostream& o) const;
};
