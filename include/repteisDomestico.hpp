#ifndef _REPTEIS_DOMESTICO_H_
#define _REPTEIS_DOMESTICO_H_

#include "repteis.hpp"
#include "domestico.hpp"

class RepteisDomestico : public Repteis,public Domestico{
    public:
        RepteisDomestico();
        ~RepteisDomestico();
};

#endif