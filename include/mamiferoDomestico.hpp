#ifndef _MAMIFERO_DOMESTICO_H_
#define _MAMIFERO_DOMESTICO_H_

#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico : public Mamifero , public Domestico{
    public:
        MamiferoDomestico();
        virtual ~MamiferoDomestico();
};

#endif