#pragma once

#include <iostream>

class Exotico
{
protected:
    std::string pais_origem;
    std::string ameacadoDeEx;
    std::string habitat;

public:
    inline Exotico(std::string pais_origem, std::string ameacadoDeEx, std::string habitat) : pais_origem(pais_origem), ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    virtual ~Exotico(){}

    std::string getPais_origem() const;
    void setPais_origem(std::string pais_origem);

    std::string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(std::string ameacadoDeEx);

    std::string getHabitat() const;
    void setHabitat(std::string habitat);
};

