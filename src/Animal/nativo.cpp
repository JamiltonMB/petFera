#include "nativo.hpp"



std::string Nativo::getLicenca_IBAMA()
{
    return licenca_IBAMA;
}
void Nativo::setLicenca_IBAMA(std::string licenca_IBAMA)
{
    this->licenca_IBAMA = licenca_IBAMA;
}

std::string Nativo::getUF_origem()
{
    return UF_origem;
}
void Nativo::setUF_origem(std::string UF_origem)
{
    this->UF_origem = UF_origem;
}

std::string Nativo::getAmeacadoDeEx() const
{
    return ameacadoDeEx;
}
void Nativo::setAmeacadoDeEx(std::string ameacadoDeEx)
{
    this->ameacadoDeEx = ameacadoDeEx;
}

std::string Nativo::getHabitat() const
{
    return habitat;
}
void Nativo::setHabitat(std::string habitat)
{
    this->habitat = habitat;
}