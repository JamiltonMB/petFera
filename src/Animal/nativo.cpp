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