#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.hpp"
#include "nativo.hpp"

class AveNativo : public Ave, public Nativo
{

public:
    AveNativo(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas,
           string licenca_IBAMA, string UF_origem);
    virtual ~AveNativo() {}

    //std::ostream &imprimeDados(std::ostream &o);
};

#endif