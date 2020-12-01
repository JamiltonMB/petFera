#include "reptil.hpp"

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