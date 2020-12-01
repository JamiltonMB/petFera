#ifndef _Ave_H_
#define _Ave_H_

#include "animal.hpp"
#include <iostream>

class Ave : public Animal
{
protected:
    double tamanho_bico;
    double corPenas;

public:
    inline Ave(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
        int patas, string especie, string tipo_pele,
        string alimento, string silvestreOuExotico, string vetResponsavel,
        string tratadorResponsavel, double tamanho_bico, double corPenas):Animal(id, nome, sexo, idade, peso, comprimento,
                                                                         patas, especie, tipo_pele,
                                                                         alimento, silvestreOuExotico, vetResponsavel,
                                                                         tratadorResponsavel){}
    Ave();
    virtual ~Ave();

    double getTamanhoBico() const;
    void setTamanhoBico(double tamanho_bico);

    double getCorPenas() const;
    void setCorPenas(double corPenas);

    std::ostream &imprimirAve(std::ostream &os) const;
};

#endif