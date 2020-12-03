#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.hpp"
#include "nativo.hpp"

class AveNativo : public Ave , public Nativo
{

public:
    AveNativo(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas,
                     string licenca_IBAMA, string UF_origem);
    virtual ~AveNativo(){}

};

#endif