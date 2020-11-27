#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo : public Mamifero , public Nativo{
    public:
        MamiferoNativo();
        ~MamiferoNativo();
};

#endif