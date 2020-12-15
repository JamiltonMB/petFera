#ifndef _ANFIBIO_EXOTICO_H_
#define __ANFIBIO_EXOTICO_H_

#include "Animal/anfibio.hpp"
#include "Animal/exotico.hpp"

class AnfibioExotico : public Anfibio, public Exotico
{
public:

    AnfibioExotico(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas, string pais_origem);

    AnfibioExotico(string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas, string pais_origem); 
    
    virtual ~AnfibioExotico(){}
    
    //std::ostream& imprimeDados(std::ostream& o);

};

#endif 