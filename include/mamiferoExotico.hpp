#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamiferos.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamiferos, public Exotico
{
<<<<<<< HEAD
public:
    MamiferoExotico(size_t id, string nome, string sexo, int idade, float peso,
                    float comprimento, int patas, string especie, string tipo_pele,
                    string alimento, string silvestreOuExotico, string vetResponsavel,
                    string tratadorResponsavel, string cor_pelo, string dentes,
                    string pais_origem, string ameacadoDeEx, string habitat);
    virtual ~MamiferoExotico(){}
=======
>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97
};

#endif