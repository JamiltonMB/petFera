#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave , public Domestico
{
public:
    AveDomestica(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas);
    virtual ~AveDomestica(){}

    //std::ostream&imprimeDados(std::ostream &o);

};

#endif
