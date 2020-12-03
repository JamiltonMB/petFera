#ifndef _ANFIBIO_EXOTICO_H_
#define __ANFIBIO_EXOTICO_H_

#include "anfibio.hpp"
#include "exotico.hpp"

class AnfibioExotico : public Anfibio, public Exotico
{
public:

    AnfibioExotico(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, int total_mudas, string pais_origem);
    virtual ~AnfibioExotico(){}
    
    std::ostream& imprimeDados(std::ostream& o);

};

#endif