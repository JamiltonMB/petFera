#ifndef _ANFIBIO_DOMESTICO_H_
#define _ANFIBIO_DOMESTICO_H_

#include "anfibios.hpp"
#include "domestico.hpp"

class AnfibioDomestico : public Domestico, public Anfibios
{
    AnfibioDomestico(){}
};

#endif