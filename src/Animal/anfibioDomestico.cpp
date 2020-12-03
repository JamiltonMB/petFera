#include "anfibioDomestico.hpp"

AnfibioDomestico::AnfibioDomestico(int id, string nome, string sexo, int idade, float peso, float comprimento,
                                   string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
                                   string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
                                   string tratadorResponsavel, int total_mudas)
    : Anfibio(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento,
              ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, total_mudas) {}

std::ostream& AnfibioDomestico::imprimeDados(std::ostream &o)
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
      << " | Total de mudas: "<<this->total_mudas<<std::endl;
   return o;
}