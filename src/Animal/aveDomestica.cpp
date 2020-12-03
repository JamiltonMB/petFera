#include "aveDomestica.hpp"

AveDomestica::AveDomestica(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas)
        : Ave(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, 
        	ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, tamanho_bico, corPenas) {}

std::ostream& AveDomestica::imprimeDados(std::ostream &o)
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
      << " | Silvestre ou Exotico:" << this->silvestreOuExotico << std::endl
      << " | Veterinário Responsavél: " << this->vetResponsavel << std::endl
      << " | Tratador Responsavél: " << this->tratadorResponsavel << std::endl
      << " | Tamanho do Bico: " << this->tamanho_bico << std::endl
      << " | Cor das penas: " << this->corPenas << std::endl;
      
   return o;
}