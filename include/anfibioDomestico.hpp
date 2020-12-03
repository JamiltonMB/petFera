#ifndef _ANFIBIO_DOMESTICO_H_
#define _ANFIBIO_DOMESTICO_H_

#include "anfibio.hpp"
#include "domestico.hpp"

class AnfibioDomestico : public Domestico, public Anfibio
{
public:
   AnfibioDomestico(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas);
    virtual ~AnfibioDomestico(){}
    std::ostream& imprimeDados(std::ostream& o);
/*    
    public:
    AnfibioDomestico();
    ~AnfibioDomestico();
    */
};

#endif