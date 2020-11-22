#ifndef _AVES_H_
#define _AVES_H_

#include "animal.hpp"
#include <iostream>

class Aves : public Animal
{
public:
    std::string coloracao_penas;
    std::string formato_bico;
    Aves(std::string coloraacao_penas, std::string formato_bico){}
};


#endif