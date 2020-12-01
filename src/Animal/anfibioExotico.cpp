#include "anfibioExotico.hpp"


AnfibioExotico::AnfibioExotico(size_t id, string nome, string sexo, int idade, float peso,
                   float comprimento, int patas, string especie, string tipo_pele,
                   string alimento, string silvestreOuExotico, string vetResponsavel,
                   string tratadorResponsavel,int total_mudas,string pais_origem, string ameacadoDeEx, string habitat)
        : Anfibio(id, nome, sexo, idade, peso, comprimento, patas, especie, tipo_pele, alimento, silvestreOuExotico, vetResponsavel, tratadorResponsavel, total_mudas),
          Exotico(pais_origem, ameacadoDeEx, habitat) {}

