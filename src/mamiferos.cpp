#include "mamiferos.hpp"

Mamiferos::Mamiferos(std::string cor_pelo, std::string dentes) : Animal(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie,
                                                                        tipo_pele, tipo_reproducao, alimento,
                                                                        ameacadoDeEx, silvestreOuExotico, vetResponsavel,
                                                                        tratadorResponsavel),
                                                                 cor_pelo(cor_pelo), dentes(dentes) {}

std::string Mamiferos::getCorPelo()
{
    return cor_pelo;
}
void Mamiferos::setCorPelo(std::string cor_pelo)
{
    this->cor_pelo = cor_pelo;
}

std::string Mamiferos::getDentes()
{
    return dentes;
}
void Mamiferos::setDentes(std::string dentes)
{
    this->dentes = dentes;
}

std::ostream &Mamiferos::imprimirMamifero(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Cor do Pelo: " << cor_pelo << std::endl
       << " | Dentes: " << dentes << std::endl;
    return os;
}