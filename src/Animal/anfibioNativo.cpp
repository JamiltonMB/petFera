#include "anfibioNativo.hpp"

AnfibioNativo::AnfibioNativo(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento,string ameacadoDeEx ,string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem) : 
								Anfibio(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, 
        								ameacadoDeEx, silvestreOuExotico, vetResponsavel, tratadorResponsavel, total_mudas),
                                Nativo(licenca_IBAMA, UF_origem) {}

