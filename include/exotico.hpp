#ifndef _EXOTICO_H_
#define __EXOTICO_H_

#include <iostream>

class Exotico
{
protected:
    std::string pais_origem;
    std::string ameacadoDeEx;
    std::string habitat;

public:
    Exotico(std::string pais_origem, std::string ameacadoDeEx, std::string habitat) : pais_origem(pais_origem), ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    ~Exotico();

    std::string getPais_origem() const;
    void setPais_origem(std::string pais_origem);

    std::string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(std::string ameacadoDeEx);

    std::string getHabitat() const;
    void setHabitat(std::string habitat);
};

std::string Exotico::getPais_origem() const
{
    return pais_origem;
}
void Exotico::setPais_origem(std::string pais_origem)
{
    this->pais_origem = pais_origem;
}

std::string Exotico::getAmeacadoDeEx() const
{
    return ameacadoDeEx;
}
void Exotico::setAmeacadoDeEx(std::string ameacadoDeEx)
{
    this->ameacadoDeEx = ameacadoDeEx;
}

std::string Exotico::getHabitat() const
{
    return habitat;
}
void Exotico::setHabitat(std::string habitat)
{
    this->habitat = habitat;
}

#endif
