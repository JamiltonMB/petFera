#include "Animal/reptilExotico.hpp"

ReptilExotico::ReptilExotico(size_t id,string nome, string sexo, int idade, float peso, 
      float comprimento, string habitat, int patas, string especie, string tipo_pele,
      string tipo_reproducao, string alimento, bool ameacadoDeEx,
      string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele, 
      string pais_origem) 
      :Reptil(id, nome, sexo, idade, peso, comprimento, habitat, patas, especie, 
         tipo_pele, tipo_reproducao, alimento, 
         ameacadoDeEx, vetResponsavel, tratadorResponsavel,tipo, troca_de_pele),
      Exotico(pais_origem) {}

ReptilExotico::ReptilExotico(string nome, string sexo, int idade, float peso, 
      float comprimento, string habitat, int patas, string especie, string tipo_pele,
      string tipo_reproducao, string alimento, bool ameacadoDeEx,
      string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele, 
      string pais_origem) 
      :Reptil(nome, sexo, idade, peso, comprimento, habitat, patas, especie, 
         tipo_pele, tipo_reproducao, alimento, 
         ameacadoDeEx, vetResponsavel, tratadorResponsavel,tipo, troca_de_pele),
      Exotico(pais_origem) {}