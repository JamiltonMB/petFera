#include "reptilDomestico.hpp"
ReptilDomestico::ReptilDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
                   int patas, string especie, string tipo_pele,
                   string alimento, string silvestreOuExotico, string vetResponsavel,
                   string tratadorResponsavel, bool troca_de_pele) 
                   :Reptil(id, nome, sexo, idade, peso, comprimento, patas, especie, tipo_pele, alimento, 
                   silvestreOuExotico, vetResponsavel, tratadorResponsavel,troca_de_pele) {}

