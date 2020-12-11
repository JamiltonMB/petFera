#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave , public Domestico
{
public:
    AveDomestica(size_t id,string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas);

    AveDomestica(string nome, string sexo, int idade, float peso, 
           float comprimento, string habitat, int patas, string especie,
           string tipo_pele, string tipo_reproducao, 
           string alimento, bool ameacadoDeEx, string vetResponsavel, 
           string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas);
    
    virtual ~AveDomestica(){}

};

#endif
