#include "Animal/anfibioDomestico.hpp"

AnfibioDomestico::AnfibioDomestico(size_t id,string nome, string sexo, int idade,
         float peso, float comprimento,
         string habitat, int patas, string especie, string tipo_pele,
         string tipo_reproducao, string alimento, bool ameacadoDeEx,
         string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas)
         :Anfibio(id,nome, sexo, idade, peso, comprimento,
         habitat, patas, especie, tipo_pele,
         tipo_reproducao, alimento, ameacadoDeEx,
         vetResponsavel, tratadorResponsavel, tipo,total_mudas) {}

AnfibioDomestico::AnfibioDomestico(string nome, string sexo, int idade,
         float peso, float comprimento,
         string habitat, int patas, string especie, string tipo_pele,
         string tipo_reproducao, string alimento, bool ameacadoDeEx,
         string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas)
         :Anfibio(nome, sexo, idade, peso, comprimento,
         habitat, patas, especie, tipo_pele,
         tipo_reproducao, alimento, ameacadoDeEx,
         vetResponsavel, tratadorResponsavel, tipo,total_mudas) {}