#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>

class Animal{
    protected:
        int id;
        std::string nome;
        std::string sexo;
        int idade;
        float peso;
        float comprimento;
        std::string ambiente; //habitat
        int patas;
        std::string especie;
        std::string tipo_pele;
        std::string tipo_reproducao;
        std::string alimento;
        std::string ameacadoDeEx;
        std::string silvestreOuExotico;
        std::string vetResponsavel;
        std::string tratadorResponsavel;
};

#endif