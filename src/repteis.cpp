#include "repteis.hpp"

Repteis::Repteis(bool troca_de_pele) : Animal(id, nome, sexo, idade, peso, comprimento, patas, especie,
                                              tipo_pele, alimento,
                                              silvestreOuExotico, vetResponsavel,
                                              tratadorResponsavel),
                                       troca_de_pele(troca_de_pele)
{
}

bool Repteis::getTrocaDePele() const
{
    return troca_de_pele;
}
void Repteis::setTrocaDePele(bool troca_de_pele)
{
    this->troca_de_pele = troca_de_pele;
}
std::ostream &Repteis::imprimirRepteis(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Troca de Pele: " << troca_de_pele << std::endl;
    return os;
}