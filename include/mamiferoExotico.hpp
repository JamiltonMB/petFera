#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamifero.hpp"
#include "exotico.hpp"

class MamiferoExotico : public Mamifero, public Exotico{
    public:
        MamiferoExotico();
        ~MamiferoExotico();
};

#endif