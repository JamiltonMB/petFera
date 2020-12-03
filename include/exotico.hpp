#ifndef _EXOTICO_H_
#define __EXOTICO_H_
#include<iostream>
class Exotico{      
    protected:
    std::string pais_origem;
    std::string ameacadoDeEx;
    std::string habitat;

public:
    inline Exotico(std::string pais_origem, std::string ameacadoDeEx, std::string habitat) : pais_origem(pais_origem), ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    virtual ~Exotico(){}

};


#endif
