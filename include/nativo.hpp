#ifndef _NATIVO_H_
#define _NATIVO_H_
#include<iostream>

class Nativo{
    protected:
    std::string licenca_IBAMA;
    std::string UF_origem;

    public:
    Nativo(std::string licenca_IBAMA, td::string UF_origem);
    ~Nativo();
};


#endif
