#include "ave.hpp"


Ave::Ave(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas) : 
           Animal(id,nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie,
           tipo_pele, tipo_reproducao, 
           alimento, ameacadoDeEx, vetResponsavel, 
           tratadorResponsavel, tipo), tamanho_bico(tamanho_bico), corPenas(corPenas) {}     

Ave::Ave(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas) : 
           Animal(nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie,
           tipo_pele, tipo_reproducao, 
           alimento, ameacadoDeEx, vetResponsavel, 
           tratadorResponsavel, tipo), tamanho_bico(tamanho_bico), corPenas(corPenas) {} 

float Ave::getTamanhoBico() const
{
    return tamanho_bico;
}
void Ave::setTamanhoBico(float tamanho_bico)
{
    this->tamanho_bico = tamanho_bico;
}

string Ave::getCorPenas() const
{
    return corPenas;
}
void Ave::setCorPenas(string corPenas)
{
    this->corPenas = corPenas;
}
