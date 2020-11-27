#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "aves.hpp"
#include "exotico.hpp"

class AveExotico : public Aves, public Exotico{
    public:
        AveExotico();
        ~AveExotico();
};

#endif