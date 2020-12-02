#include "reptil.hpp"

Reptil::Reptil(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, bool troca_de_pele) 
                   :Animal(id, nome, sexo, idade, peso, comprimento,
           ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel,
           tratadorResponsavel),troca_de_pele(troca_de_pele) {}


bool Reptil::getTrocaDePele() const
{
    return troca_de_pele;
}
void Reptil::setTrocaDePele(bool troca_de_pele)
{
    this->troca_de_pele = troca_de_pele;
}
std::ostream &Reptil::imprimirReptil(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Troca de Pele: " << troca_de_pele << std::endl;
    return os;
}