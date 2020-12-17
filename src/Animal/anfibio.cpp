#include "Animal/anfibio.hpp"

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
