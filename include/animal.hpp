#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
using std::string;

class Animal{
    protected:
        int id;
        string nome;
        string sexo;
        int idade;
        float peso;
        float comprimento;
        string ambiente; //habitat
        int patas;
        string especie;
        string tipo_pele;
        string tipo_reproducao;
        string alimento;
        string ameacadoDeEx;
        string silvestreOuExotico;
        string vetResponsavel;
        string tratadorResponsavel;
    public:
    Animal(int id, string nome, string sexo, int idade,float peso,float comprimento,string ambiente,
        int patas, string especie, string tipo_pele, string tipo_reproducao, string alimento,
        string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel, string tratadorResponsavel){}
    ~Animal(){}
};

#endif