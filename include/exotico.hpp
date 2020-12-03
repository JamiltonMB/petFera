#ifndef _EXOTICO_H_
#define __EXOTICO_H_
#include <iostream>
class Exotico
{
protected:
    std::string pais_origem;

public:
    inline Exotico(std::string pais_origem) : pais_origem(pais_origem) {}
    virtual ~Exotico() {}
    std::string getPais_origem() const;
    void setPais_origem(std::string pais_origem);
};

#endif
