#include "reptilDomestico.hpp"
ReptilDomestico::ReptilDomestico(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele) 
                   :Reptil(id, nome, sexo, idade, peso, comprimento,
           habitat, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, vetResponsavel,
           tratadorResponsavel,tipo,troca_de_pele) {}

/*std::ostream& ReptilDomestico::imprimeDados(std::ostream &o)
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
      << " | Troca de pele: " << this->troca_de_pele << std::endl;
      
   return o;
}*/