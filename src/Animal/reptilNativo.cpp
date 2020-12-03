#include "reptilNativo.hpp"

ReptilNativo::ReptilNativo(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, bool troca_de_pele, string licenca_IBAMA, string UF_origem): 
Reptil(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, 
	ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, troca_de_pele), 
Nativo(licenca_IBAMA, UF_origem){}
