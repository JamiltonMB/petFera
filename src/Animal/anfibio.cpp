#include "anfibio.hpp"

Anfibio::Anfibio(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                 int patas, string especie, string tipo_pele,
                 string alimento, string silvestreOuExotico, string vetResponsavel,
                 string tratadorResponsavel, int total_mudas) : Animal(id, nome, sexo, idade, peso, comprimento,
                                                                       patas, especie, tipo_pele,
                                                                       alimento, silvestreOuExotico, vetResponsavel,
                                                                       tratadorResponsavel),
                                                                total_mudas(total_mudas) {}

int Anfibio::getMudas() { return total_mudas; }

void Anfibio::setMudas(int total_mudas) { this->total_mudas = total_mudas; }