#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "aves.hpp"
#include "domestico.hpp"

class AveDomestica : public Aves , public Domestico
{
    public:
    AveDomestica();
    ~AveDomestica();
};

#endif
