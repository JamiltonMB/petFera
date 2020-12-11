#include "mamifero.hpp"

Mamifero::Mamifero(size_t id, string nome, string sexo, int idade,
     float peso, float comprimento, string habitat, int patas, string especie, 
     string tipo_pele, string tipo_reproducao, string alimento, bool ameacadoDeEx,
    string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, 
    string dentes) : Animal(id, nome, sexo, idade, peso, comprimento,
    habitat, patas, especie, tipo_pele, tipo_reproducao, alimento, 
    ameacadoDeEx, vetResponsavel, tratadorResponsavel, tipo),
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