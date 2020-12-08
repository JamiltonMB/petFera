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
std::ostream& Ave::imprimeDados(std::ostream &o) const
{
   o << "| ID: " << this->id << std::endl
      << " | Nome: " << this->nome << std::endl
      << " | Sexo: " << this->sexo << std::endl
      << " | Idade: " << this->idade << std::endl
      << " | Peso: " << this->peso << std::endl
      << " | Comprimento: " << this->comprimento << std::endl
      << " | Ambiente(Habitat): " << habitat << std::endl
      << " | Patas: " << this->patas << std::endl
      << " | Especie: " << this->especie << std::endl
      << " | Tipo de Pele " << this->tipo_pele << std::endl
      << " | Tipo de Reprodução: " << this->tipo_reproducao << std::endl
      << " | Alimento: " << this->alimento << std::endl
      << " | Ameacado de Extinção: " << this->ameacadoDeEx << std::endl
      << " | Veterinário Responsavél: " << this->vetResponsavel << std::endl
      << " | Tratador Responsavél: " << this->tratadorResponsavel << std::endl
      << " | Tipo: " << this->tipo << std::endl
      << " | Tamanho do Bico: " << this->tamanho_bico << std::endl
      << " | Cor das penas: " << this->corPenas << std::endl; 

      
   return o;
}