#include "mamifero.hpp"

Mamifero::Mamifero(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, string cor_pelo, string dentes) : Animal(id, nome, sexo, idade, peso, comprimento,
           ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel,
           tratadorResponsavel), cor_pelo(cor_pelo), dentes(dentes) {}
    

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

