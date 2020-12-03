#include "mamiferoExotico.hpp"

MamiferoExotico::MamiferoExotico(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, string cor_pelo, string dentes, string pais_origem, string habitat) :
           Mamifero(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, 
           	alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, cor_pelo, dentes), 
            Exotico(pais_origem, ameacadoDeEx, habitat) {}


    