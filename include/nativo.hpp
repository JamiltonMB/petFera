#ifndef _NATIVO_H_
#define _NATIVO_H_
#include<iostream>

//<<<<<<< HEAD

//=======
class Nativo{
public:
    Nativo(std::string licenca_IBAMA, std::string UF_origem, std::string ameacadoDeEx, std::string habitat) : licenca_IBAMA(licenca_IBAMA), UF_origem(UF_origem),
                                  ameacadoDeEx(ameacadoDeEx), habitat(habitat) {}
    virtual ~Nativo(){}

std::string getLicenca_IBAMA();
void setLicenca_IBAMA(std::string licenca_IBAMA);
std::string getUF_origem();
void setUF_origem(std::string UF_origem);
std::string getAmeacadoDeEx() const;
void setAmeacadoDeEx(std::string ameacadoDeEx);
std::string getHabitat() const;
void setHabitat(std::string habitat);

protected:
    std::string licenca_IBAMA;
    std::string UF_origem;
    std::string ameacadoDeEx;
    std::string habitat;    
//>>>>>>> ddf01113e284a47dcff2ab94ff98f7d87ffaaf97

};


#endif
