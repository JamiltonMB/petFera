#ifndef _ANFIBIO_EXOTICO_H_
#define __ANFIBIO_EXOTICO_H_

#include "anfibios.hpp"
#include "exotico.hpp"

class AnfibioExotico : public Anfibios, public Exotico
{
public:
<<<<<<< HEAD
    AnfibioExotico(size_t id, string nome, string sexo, int idade, float peso,
                  float comprimento, int patas, string especie, string tipo_pele,
                  string alimento, string silvestreOuExotico, string vetResponsavel,
                  string tratadorResponsavel,int total_mudas,string pais_origem, 
                  string ameacadoDeEx, string habitat);
    virtual ~AnfibioExotico(){}
=======
    AnfibioExotico();
    ~AnfibioExotico();
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif