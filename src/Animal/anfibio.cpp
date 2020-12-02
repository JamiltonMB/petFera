#include "anfibio.hpp"

Anfibio::Anfibio(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas) : Animal(id, nome, sexo, idade, peso, comprimento,
           ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel,
           tratadorResponsavel), total_mudas(total_mudas) {}

int Anfibio::getMudas() { return total_mudas; }

void Anfibio::setMudas(int total_mudas) { this->total_mudas = total_mudas; }