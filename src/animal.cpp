#include "animal.hpp"
Animal::Animal(size_t id, string nome, string sexo, int idade, float peso,
               float comprimento, int patas, string especie, string tipo_pele,
               string alimento, string silvestreOuExotico, string vetResponsavel,
               string tratadorResponsavel) : id(id), nome(nome), idade(idade), peso(peso),
                                             comprimento(comprimento), patas(patas),
                                             especie(especie), tipo_pele(tipo_pele), alimento(alimento),
                                             silvestreOuExotico(silvestreOuExotico), vetResponsavel(vetResponsavel),
                                             tratadorResponsavel(tratadorResponsavel) {}
Animal::~Animal() {}

void Animal::setId(size_t id)
{
    this->id = id;
}
size_t Animal::getId()
{
    return id;
}

string Animal::getNome() const
{
    return nome;
}
void Animal::setNome(string nome)
{
    this->nome = nome;
}

string Animal::getSexo() const
{
    return sexo;
}
void Animal::setSexo(string sexo)
{
    this->sexo = sexo;
}

int Animal::getIdade() const
{
    return idade;
}
void Animal::setIdade(int idade)
{
    this->idade = idade;
}

float Animal::getPeso() const
{
    return peso;
}
void Animal::setPeso(float peso)
{
    this->peso = peso;
}

float Animal::getComprimento() const
{
    return comprimento;
}
void Animal::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}

int Animal::getPatas() const
{
    return patas;
}
void Animal::setPatas(int patas)
{
    this->patas = patas;
}

string Animal::getEspecie() const
{
    return especie;
}
void Animal::setEspecie(string especie)
{
    this->especie = especie;
}

string Animal::getTipo_pele() const
{
    return tipo_pele;
}
void Animal::setTipo_pele(string tipo_pele)
{
    this->tipo_pele = tipo_pele;
}

string Animal::getAlimento() const
{
    return alimento;
}
void Animal::setAlimento(string alimento)
{
    this->alimento = alimento;
}

string Animal::getSilvestreOuExotico() const
{
    return silvestreOuExotico;
}
void Animal::setSilvestreOuExotico(string silvestreOuExtico)
{
    this->silvestreOuExotico = silvestreOuExotico;
}

string Animal::getVetResposavel() const
{
    return vetResponsavel;
}
void Animal::setVetResponsavel(string vetResponsavel)
{
    this->vetResponsavel = vetResponsavel;
}

string Animal::getTratadorResponsavel() const
{
    return tratadorResponsavel;
}
void Animal::setTratadorResponsavel(string tratadorResponsavel)
{
    this->tratadorResponsavel = tratadorResponsavel;
}

std::ostream &Animal::imprimirAnimal(std::ostream &os) const
{
    os << "| ID: " << id << std::endl
       << " | Nome: " << nome << std::endl
       << " | Sexo: " << sexo << std::endl
       << " | Idade: " << idade << std::endl
       << " | Peso: " << peso << std::endl
       << " | Comprimento: " << comprimento << std::endl
       << " | Patas: " << patas << std::endl
       << " | Especie: " << especie << std::endl
       << " | Tipo de Pele " << tipo_pele << std::endl
       << " | Alimento: " << alimento << std::endl
       << " | Silvestre ou Exotico:" << silvestreOuExotico << std::endl
       << " | Veterinário Responsavél: " << vetResponsavel << std::endl
       << " | Tratador Responsavél: " << tratadorResponsavel << std::endl;

    return os;
}