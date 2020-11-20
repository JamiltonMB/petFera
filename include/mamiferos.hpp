#ifndef _MAMIFEROS_H_
#define _MAMIFEROS_H_

#include <iostream>
#include "animal.hpp"

class Mamiferos : public Animal{
    public:
        sting cor_pelo;
        string dentes; //se possui dentes desenvolvidos
        //string tipo_mamifero;
};

#endif