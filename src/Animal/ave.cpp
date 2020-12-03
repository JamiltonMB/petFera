#include "ave.hpp"

/*
Ave::Ave(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
               int patas, string especie, string tipo_pele,
               string alimento, string silvestreOuExotico, string vetResponsavel,
               string tratadorResponsavel, double tamanho_bico, string corPenas)
        : Animal(id, nome, sexo, idade, peso, comprimento,
                 patas, especie, tipo_pele,
                 alimento, silvestreOuExotico, vetResponsavel,
                 tratadorResponsavel),
          tamanho_bico(tamanho_bico), corPenas(corPenas) {}
*/
Ave::Ave(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas) : Animal(id, nome, sexo, idade, peso, comprimento,
           ambiente, patas, especie, tipo_pele, tipo_reproducao, alimento, ameacadoDeEx, silvestreOuExotico, vetResponsavel,
           tratadorResponsavel), tamanho_bico(tamanho_bico), corPenas(corPenas) {}     


double Ave::getTamanhoBico() const
{
    return tamanho_bico;
}
void Ave::setTamanhoBico(double tamanho_bico)
{
    this->tamanho_bico = tamanho_bico;
}

string Ave::getCorPenas() const
{
    return corPenas;
}
void Ave::setCorPenas(string corPenas)
{
    this->corPenas = corPenas;
}
