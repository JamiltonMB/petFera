#include "mamifero.hpp"

Mamifero::Mamifero(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   string habitat, int patas, string especie, string tipo_pele,
                   string tipo_reproducao, string alimento, bool ameacadoDeEx,
                   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes) : Animal(id, nome, sexo, idade, peso, comprimento,
                                                                                                                              habitat, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, vetResponsavel,
                                                                                                                              tratadorResponsavel, tipo),
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

std::ostream& Mamifero::imprimeDados(std::ostream &o) const
{
    o << "| ID: " << this->id << std::endl
      << " | Nome: " << this->nome << std::endl
      << " | Sexo: " << this->sexo << std::endl
      << " | Idade: " << this->idade << std::endl
      << " | Peso: " << this->peso << std::endl
      << " | Comprimento: " << this->comprimento << std::endl
      << " | Ambiente(Habitat): " << ambiente << std::endl
      << " | Patas: " << this->patas << std::endl
      << " | Especie: " << this->especie << std::endl
      << " | Tipo de Pele " << this->tipo_pele << std::endl
      << " | Tipo de Reprodução: " << this->tipo_reproducao << std::endl
      << " | Alimento: " << this->alimento << std::endl
      << " | Ameacado de Extinção: " << this->ameacadoDeEx << std::endl
     << " | Tipo: " << this->tipo << std::endl
      << " | Veterinário Responsavél: " << this->vetResponsavel << std::endl
      << " | Tratador Responsavél: " << this->tratadorResponsavel << std::endl
      << " | Tipo: " << this->tipo << std::endl
      << " | Cor do pelo: " << this->cor_pelo << std::endl
      << " | Tipo dentário: " << this->dentes << std::endl;

    return o;
}