#include "aveNativo.hpp"

AveNativo::AveNativo(size_t id, string nome, string sexo, int idade, float peso,
                     float comprimento, int patas, string especie, string tipo_pele,
                     string alimento, string silvestreOuExotico, string vetResponsavel,
                     string tratadorResponsavel, double tamanho_bico, string corPenas,
                     string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
                     string habitat)
        : Ave(id, nome, sexo, idade, peso, comprimento,
              patas, especie, tipo_pele,
              alimento, silvestreOuExotico, vetResponsavel,
              tratadorResponsavel, tamanho_bico, corPenas),
          Nativo(licenca_IBAMA, UF_origem, ameacadoDeEx,
                 habitat) {}

