#ifndef _REPTEIS_EXOTICO_H_
#define __REPTEIS_EXOTICO_H_

#include "repteis.hpp"
#include "exotico.hpp"

class RepteisExotico : public Repteis, public Exotico
{
    public:
        RepteisExotico();
        virtual ~RepteisExotico();
};

#endif