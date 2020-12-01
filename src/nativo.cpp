#include "nativo.hpp"


string Nativo::getLicenca_IBAMA()
{
    return licenca_IBAMA;
}
void Nativo::setLicenca_IBAMA(string licenca_IBAMA)
{
    this->licenca_IBAMA = licenca_IBAMA;
}

string Nativo::getUF_origem()
{
    return UF_origem;
}
void Nativo::setUF_origem(string UF_origem)
{
    this->UF_origem = UF_origem;
}

string Nativo::getAmeacadoDeEx() const
{
    return ameacadoDeEx;
}
void Nativo::setAmeacadoDeEx(string ameacadoDeEx)
{
    this->ameacadoDeEx = ameacadoDeEx;
}

string Nativo::getHabitat() const
{
    return habitat;
}
void Nativo::setHabitat(string habitat)
{
    this->habitat = habitat;
}