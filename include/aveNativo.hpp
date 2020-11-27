#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.hpp"
#include "nativo.hpp"

class AveNativo : public Ave , public Nativo
{
    public:
        AveNativo();
        ~AveNativo();
};

#endif