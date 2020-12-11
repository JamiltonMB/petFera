#include "reptil.hpp"

Reptil::Reptil(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
           bool troca_de_pele) 
                   :Animal(id, nome, sexo, idade, peso, comprimento,
           habitat, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, 
           vetResponsavel, tratadorResponsavel, tipo),troca_de_pele(troca_de_pele) {}

Reptil::Reptil(string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, 
           bool troca_de_pele) 
                   :Animal(nome, sexo, idade, peso, comprimento,
           habitat, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, 
           vetResponsavel, tratadorResponsavel, tipo),troca_de_pele(troca_de_pele) {}

bool Reptil::getTrocaDePele() const
{
    return troca_de_pele;
}
void Reptil::setTrocaDePele(bool troca_de_pele)
{
    this->troca_de_pele = troca_de_pele;
}