#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "aves.hpp"
#include "nativo.hpp"

class AveNativo : public Aves , public Nativo
{
    public:
        AveNativo();
        ~AveNativo();
};

#endif