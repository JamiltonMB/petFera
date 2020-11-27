#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIV0_H_

#include "anfibios.hpp"
#include "nativo.hpp"

class AnfibioNativo : public Anfibios, public Nativo
{
public:
    AnfibioNativo();
    ~AnfibioNativo();
};

#endif