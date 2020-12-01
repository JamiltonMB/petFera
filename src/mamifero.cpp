#include "mamifero.hpp"

std::string Mamifero::getCorPelo()
{
    return cor_pelo;
}
void Mamifero::setCorPelo(std::string cor_pelo)
{
    this->cor_pelo = cor_pelo;
}

std::string Mamifero::getDentes()
{
    return dentes;
}
void Mamifero::setDentes(std::string dentes)
{
    this->dentes = dentes;
}

std::ostream &Mamifero::imprimirMamifero(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Cor do Pelo: " << cor_pelo << std::endl
       << " | Dentes: " << dentes << std::endl;
    return os;
}