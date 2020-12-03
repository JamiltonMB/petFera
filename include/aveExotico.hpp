#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "ave.hpp"
#include "exotico.hpp"

class AveExotico : public Ave, public Exotico
{
public:
    AveExotico(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel, double tamanho_bico, string corPenas,
           string pais_origem);
    virtual ~AveExotico(){}


};

#endif