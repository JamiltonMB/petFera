#include "aveDomestica.hpp"

AveDomestica::AveDomestica(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas)
        : Ave(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, 
        	ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, tamanho_bico, corPenas) {}

