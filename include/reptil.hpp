#ifndef _REPTEIS_H_
#define _REPTEIS_H_
#include <iostream>
#include "animal.hpp"

class Reptil : public Animal
{
protected:
    bool troca_de_pele;

public:
    inline Reptil(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,
                   string alimento, string silvestreOuExotico, string vetResponsavel,
                   string tratadorResponsavel, bool troca_de_pele) 
                   :Animal(id, nome, sexo, idade, peso, comprimento, patas, especie, tipo_pele, alimento, 
                   silvestreOuExotico, vetResponsavel, tratadorResponsavel),troca_de_pele(troca_de_pele) {}
    virtual ~Reptil();
    bool getTrocaDePele() const;
    void setTrocaDePele(bool troca_de_pele);

    std::ostream &imprimirRepil(std::ostream &os) const;
};

#endif