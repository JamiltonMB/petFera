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
    virtual ~Nativo(){}

    string getLicenca_IBAMA();
    void setLicenca_IBAMA(string licenca_IBAMA);

    string getUF_origem();
    void setUF_origem(string UF_origem);

    string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(string ameacadoDeEx);

    string getHabitat() const;
    void setHabitat(string habitat);
};
