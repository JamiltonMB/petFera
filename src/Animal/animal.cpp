#include "animal.hpp"

Animal::Animal(size_t id, string nome, string sexo, int idade, float peso,
               float comprimento, string habitat, int patas, string especie,
               string tipo_pele, string tipo_reproducao, string alimento,
               bool ameacadoDeEx, string vetResponsavel,
               string tratadorResponsavel, tpAnimal tipo) : 
               id(id), nome(nome), sexo(sexo), idade(idade), 
               peso(peso), comprimento(comprimento), habitat(habitat),
               patas(patas), especie(especie), tipo_pele(tipo_pele),
               tipo_reproducao(tipo_reproducao), alimento(alimento),
               ameacadoDeEx(ameacadoDeEx), vetResponsavel(vetResponsavel),
               tratadorResponsavel(tratadorResponsavel), tipo(tipo) {}

Animal::~Animal() {}

void Animal::setId(size_t id)
{
    this->id = id;
}
size_t Animal::getId() const
{
    return this->id;
}

string Animal::getNome() const
{
    return this->nome;
}
void Animal::setNome(string nome)
{
    this->nome = nome;
}

string Animal::getSexo() const
{
    return this->sexo;
}
void Animal::setSexo(string sexo)
{
    this->sexo = sexo;
}

int Animal::getIdade() const
{
    return this->idade;
}
void Animal::setIdade(int idade)
{
    this->idade = idade;
}

float Animal::getPeso() const
{
    return this->peso;
}
void Animal::setPeso(float peso)
{
    this->peso = peso;
}

float Animal::getComprimento() const
{
    return this->comprimento;
}
void Animal::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}

string Animal::getHabitat() const
{
    return this->habitat;
}
void Animal::setHabitat(string habitat)
{
    this->habitat = habitat;
}

int Animal::getPatas() const
{
    return this->patas;
}
void Animal::setPatas(int patas)
{
    this->patas = patas;
}

string Animal::getEspecie() const
{
    return this->especie;
}
void Animal::setEspecie(string especie)
{
    this->especie = especie;
}

string Animal::getTipo_pele() const
{
    return this->tipo_pele;
}
void Animal::setTipo_pele(string tipo_pele)
{
    this->tipo_pele = tipo_pele;
}

string Animal::getTipo_reproducao() const
{
    return this->tipo_reproducao;
}
void Animal::setTipo_reproducao(string tipo_reproducao)
{
    this->tipo_reproducao = tipo_reproducao;
}

string Animal::getAlimento() const
{
    return this->alimento;
}
void Animal::setAlimento(string alimento)
{
    this->alimento = alimento;
}

bool Animal::getAmeacadoDeEx() const
{
    return this->ameacadoDeEx;
}
void Animal::setAmeacadoDeEx(bool ameacadoDeEx)
{
    this->ameacadoDeEx = ameacadoDeEx;
}

string Animal::getVetResposavel() const
{
    return this->vetResponsavel;
}
void Animal::setVetResponsavel(string vetResponsavel)
{
    this->vetResponsavel = vetResponsavel;
}

string Animal::getTratadorResponsavel() const
{
    return this->tratadorResponsavel;
}
void Animal::setTratadorResponsavel(string tratadorResponsavel)
{
    this->tratadorResponsavel = tratadorResponsavel;
}

tpAnimal Animal::getTpAnimal() const 
{
    return this->tipo;
}
void Animal::setTpAnimal(tpAnimal tipo) 
{
    this->tipo=tipo;
}

std::ostream &operator<<(std::ostream &o, Animal const &func)
{
    return func.imprimeDados(o);
}

std::ostream &Animal::imprimeDados(std::ostream &o) const { return o; }