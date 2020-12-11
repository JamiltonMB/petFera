#include "anfibio.hpp"

Anfibio::Anfibio(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, int total_mudas) : 
           Animal(id, nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie, tipo_pele,
           tipo_reproducao, alimento, ameacadoDeEx,
           vetResponsavel, tratadorResponsavel, tipo), total_mudas(total_mudas) {}

Anfibio::Anfibio(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, int total_mudas) : 
           Animal(nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie, tipo_pele,
           tipo_reproducao, alimento, ameacadoDeEx,
           vetResponsavel, tratadorResponsavel, tipo), total_mudas(total_mudas) {}

int Anfibio::getMudas() { return total_mudas; }

void Anfibio::setMudas(int total_mudas) { this->total_mudas = total_mudas; }

std::ostream& Anfibio::imprimeDados(std::ostream &o) const
{
   o << "| ID: " << this->id << std::endl
      << " | Nome: " << this->nome << std::endl
      << " | Sexo: " << this->sexo << std::endl
      << " | Idade: " << this->idade << std::endl
      << " | Peso: " << this->peso << std::endl
      << " | Comprimento: " << this->comprimento << std::endl
      << " | Habitat: " << this->habitat << std::endl
      << " | Patas: " << this->patas << std::endl
      << " | Especie: " << this->especie << std::endl
      << " | Tipo de Pele " << this->tipo_pele << std::endl
      << " | Tipo de Reprodução: " << this->tipo_reproducao << std::endl
      << " | Alimento: " << this->alimento << std::endl
      << " | Ameacado de Extinção: " << this->ameacadoDeEx << std::endl
      << " | Veterinário Responsavél: " << this->vetResponsavel << std::endl
      << " | Tratador Responsavél: " << this->tratadorResponsavel << std::endl
      << " | Tipo: " << this->tipo << std::endl
      << " | Total de mudas: "<<this->total_mudas<<std::endl; 
   return o;
}