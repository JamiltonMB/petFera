#ifndef _MAMIFEROS_H_
#define _MAMIFEROS_H_

#include <iostream>
#include "animal.hpp"

class Mamiferos : public Animal{
    protected:
        std::string cor_pelo;
        std::string dentes; //se possui dentes desenvolvidos
        //string tipo_mamifero;
    public:
    std::string getCorPelo();
};

#endif