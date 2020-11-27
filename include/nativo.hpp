#ifndef _NATIVO_H_
#define _NATIVO_H_
#include <iostream>

class Nativo
{
protected:
    std::string licenca_IBAMA;
    std::string UF_origem;
    std::string ameacadoDeEx;
    std::string habitat;

public:
    Nativo(std::string licenca_IBAMA, std::string UF_origem, std::string ameacadoDeEx,
           std::string habitat) : licenca_IBAMA(licenca_IBAMA), UF_origem(UF_origem),
                                  ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    ~Nativo();

    std::string getLicenca_IBAMA();
    void setLicenca_IBAMA(std::string licenca_IBAMA);

    std::string getUF_origem();
    void setUF_origem(std::string UF_origem);

    std::string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(std::string ameacadoDeEx);

    std::string getHabitat() const;
    void setHabitat(std::string habitat);
};

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

#endif
