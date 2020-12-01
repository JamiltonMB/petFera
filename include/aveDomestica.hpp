#ifndef _AVE_DOMESTICA_H_
#define _AVE_DOMESTICA_H_

#include "ave.hpp"
#include "domestico.hpp"

class AveDomestica : public Ave , public Domestico
{
    public:
    AveDomestica();
   virtual  ~AveDomestica();
};

#endif
