#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "ave.hpp"
#include "exotico.hpp"

class AveExotico : public Ave, public Exotico{
    public:
        AveExotico();
        virtual ~AveExotico();
};

#endif