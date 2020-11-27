#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamiferos.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamiferos, public Exotico{
    public:
        MamiferoExotico();
        ~MamiferoExotico();
};

#endif