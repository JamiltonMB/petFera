#include "anfibioDomestico.hpp"

AnfibioDomestico::AnfibioDomestico(int id, string nome, string sexo, int idade, float peso, float comprimento,
                                   string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
                                   string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
                                   string tratadorResponsavel, int total_mudas)
    : Anfibio(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento,
              ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, total_mudas) {}

std::ostream& AnfibioDomestico::imprimeDados(std::ostream &o)
{
   o << "| ID: " << id << std::endl
      << " | Nome: " << nome << std::endl
      << " | Sexo: " << sexo << std::endl
      << " | Idade: " << idade << std::endl
      << " | Peso: " << peso << std::endl
      << " | Comprimento: " << comprimento << std::endl
      << " | Ambiente(Habitat): " << ambiente << std::endl
      << " | Patas: " << patas << std::endl
      << " | Especie: " << especie << std::endl
      << " | Tipo de Pele " << tipo_pele << std::endl
      << " | Tipo de Reprodução: " << tipo_reproducao << std::endl
      << " | Alimento: " << alimento << std::endl
      << " | Ameacado de Extinção: " << ameacadoDeEx << std::endl
      << " | Silvestre ou Exotico:" << silvestreOuExotico << std::endl
      << " | Veterinário Responsavél: " << vetResponsavel << std::endl
      << " | Tratador Responsavél: " << tratadorResponsavel << std::endl
      << " | Total de mudas: "<<total_mudas<<std::endl;
   return o;
}