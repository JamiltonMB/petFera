#include "mamiferoNativo.hpp"

MamiferoNativo::MamiferoNativo(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, string cor_pelo, string dentes, string licenca_IBAMA, string UF_origem): 
			Mamifero(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, 
           	alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, cor_pelo, dentes),
                                     Nativo(licenca_IBAMA, UF_origem) {}
