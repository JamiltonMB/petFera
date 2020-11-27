#ifndef _ANFIBIO_EXOTICO_H_
#define __ANFIBIO_EXOTICO_H_

#include "anfibios.hpp"
#include "exotico.hpp"

class AnfibioExotico : public Anfibios, public Exotico
{
public:
    AnfibioExotico();
    ~AnfibioExotico();
};

#endif