#pragma once
#include <iostream>
using std::string;
class Nativo
{
protected:
    string licenca_IBAMA;
    string UF_origem;
    string ameacadoDeEx;
    string habitat;

public:
    Nativo(string licenca_IBAMA,string UF_origem, string ameacadoDeEx,
           string habitat) : licenca_IBAMA(licenca_IBAMA), UF_origem(UF_origem),
                                  ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    virtual ~Nativo();

    string getLicenca_IBAMA();
    void setLicenca_IBAMA(string licenca_IBAMA);

    string getUF_origem();
    void setUF_origem(string UF_origem);

    string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(string ameacadoDeEx);

    string getHabitat() const;
    void setHabitat(string habitat);
};

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
