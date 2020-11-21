#include "animal.hpp"
Animal::Animal(int id, string nome, string sexo, int idade, float peso, float comprimento, string ambiente,
               int patas, string especie, string tipo_pele, string tipo_reproducao, string alimento,
               string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel, string tratadorResponsavel)
{
    this->id = id;
    this->nome = nome;
    this->sexo = sexo;
    this->idade = idade;
    this->peso = peso;
    this->comprimento = comprimento;
    this->ambiente = ambiente;
    this->patas = patas;
    this->especie = especie;
    this->tipo_pele = tipo_pele;
    this->tipo_reproducao = tipo_reproducao;
    this->alimento = alimento;
    this->ameacadoDeEx = ameacadoDeEx;
    this->silvestreOuExotico = silvestreOuExotico;
    this->vetResponsavel = vetResponsavel;
    this->tratadorResponsavel = tratadorResponsavel;
}

string Animal::getNome()
{
    return nome;
}
void Animal::setNome(string nome)
{
    this->nome = nome;
}

string Animal::getSexo()
{
    return sexo;
}
void Animal::setSexo(string sexo)
{
    this->sexo = sexo;
}

int Animal::getIdade()
{
    return idade;
}
void Animal::setIdade(int idade)
{
    this->idade = idade;
}

float Animal::getPeso()
{
    return peso;
}
void Animal::setPeso(float peso)
{
    this->peso = peso;
}

float Animal::getComprimento()
{
    return comprimento;
}
void Animal::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}

string Animal::getAmbiente()
{
    return ambiente;
}
void Animal::setAmbiente(string ambiente)
{
    this->ambiente = ambiente;
}

int Animal::getPatas()
{
    return patas;
}
void Animal::setPatas(int patas)
{
    this->patas = patas;
}

string Animal::getEspecie()
{
    return especie;
}
void Animal::setEspecie(string especie)
{
    this->especie = especie;
}

string Animal::getTipo_pele()
{
    return tipo_pele;
}
void Animal::setTipo_pele(string tipo_pele)
{
    this->tipo_pele = tipo_pele;
}

string Animal::getTipo_reproducao()
{
    return tipo_reproducao;
}
void Animal::setTipo_reproducao(string tipo_reproducao)
{
    this->tipo_reproducao = tipo_reproducao;
}

string Animal::getAlimento()
{
    return alimento;
}
void Animal::setAlimento(string alimento)
{
    this->alimento = alimento;
}

string Animal::getAmeacadoDeEx()
{
    return ameacadoDeEx;
}
void Animal::setAmeacadoDeEx(string ameacadoDeEx)
{
    this->ameacadoDeEx = ameacadoDeEx;
}

string Animal::getSilvestreOuExotico()
{
    return silvestreOuExotico;
}
void Animal::setSilvestreOuExotico(string silvestreOuExtico)
{
    this->silvestreOuExotico = silvestreOuExotico;
}

string Animal::getVetResposavel()
{
    return vetResponsavel;
}
void Animal::setVetResponsavel(string vetResponsavel)
{
    this->vetResponsavel = vetResponsavel;
}

string Animal::getTratadorResponsavel()
{
    return tratadorResponsavel;
}
void Animal::setTratadorResponsavel(string tratadorResponsavel)
{
    this->tratadorResponsavel = tratadorResponsavel;
}