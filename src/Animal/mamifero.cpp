#include "mamifero.hpp"

Mamifero::Mamifero(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                    int patas, string especie, string tipo_pele,
                    string alimento, string silvestreOuExotico, string vetResponsavel,
                    string tratadorResponsavel, string cor_pelo, string dentes) : Animal(id, nome, sexo, idade, peso, comprimento, patas, especie,
                                                                                         tipo_pele,
                                                                                         alimento, silvestreOuExotico, vetResponsavel,
                                                                                         tratadorResponsavel),
                                                                                  cor_pelo(cor_pelo), dentes(dentes) {}
    

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