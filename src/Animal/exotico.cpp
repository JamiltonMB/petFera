#include "exotico.hpp"


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