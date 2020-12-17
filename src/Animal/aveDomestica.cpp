#include "Animal/aveDomestica.hpp"

AveDomestica::AveDomestica(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas)
    : Ave(id,nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie,
           tipo_pele, tipo_reproducao, 
           alimento, ameacadoDeEx, vetResponsavel, 
           tratadorResponsavel, tipo, tamanho_bico, corPenas) {}

AveDomestica::AveDomestica(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas)
    : Ave(nome, sexo, idade, peso, 
           comprimento, habitat, patas, especie,
           tipo_pele, tipo_reproducao, 
           alimento, ameacadoDeEx, vetResponsavel, 
           tratadorResponsavel, tipo, tamanho_bico, corPenas) {}