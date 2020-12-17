#include "Animal/mamiferoDomestico.hpp"

MamiferoDomestico::MamiferoDomestico(size_t id,string nome, string sexo, int idade, 
   float peso, float comprimento, string habitat, int patas, string especie, 
   string tipo_pele,  string tipo_reproducao, string alimento, bool ameacadoDeEx,
   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, 
   string dentes): Mamifero( id, nome,  sexo,  idade,  peso,  comprimento,
   habitat,  patas,  especie,  tipo_pele,
   tipo_reproducao,  alimento,  ameacadoDeEx,
   vetResponsavel,  tratadorResponsavel,  tipo,  cor_pelo,  dentes){}

MamiferoDomestico::MamiferoDomestico(string nome, string sexo, int idade, 
   float peso, float comprimento, string habitat, int patas, string especie, 
   string tipo_pele,  string tipo_reproducao, string alimento, bool ameacadoDeEx,
   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, 
   string dentes): Mamifero( id, nome,  sexo,  idade,  peso,  comprimento,
   habitat,  patas,  especie,  tipo_pele,
   tipo_reproducao,  alimento,  ameacadoDeEx,
   vetResponsavel,  tratadorResponsavel,  tipo,  cor_pelo,  dentes){}
