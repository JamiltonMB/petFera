#ifndef _REPTEIS_NATIVO_H_
#define _REPTEIS_NATIVO_H_

#include "repteis.hpp"
#include "nativo.hpp"

class RepteisNativo : public Repteis, public Nativo{
    public:
        RepteisNativo();
        ~RepteisNativo();
};

#endif