#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "Animal/ave.hpp"
#include "Animal/nativo.hpp"

class AveNativo : public Ave, public Nativo
{

public:
    AveNativo(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas,
           string licenca_IBAMA, string UF_origem);
    
    AveNativo(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, float tamanho_bico, string corPenas,
           string licenca_IBAMA, string UF_origem);
    
    virtual ~AveNativo() {}

};

#endif