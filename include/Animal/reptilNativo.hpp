#pragma once

#include "Animal/reptil.hpp"
#include "Animal/nativo.hpp"

class ReptilNativo : public Reptil, public Nativo
{
public:
	ReptilNativo(size_t id,string nome, string sexo, int idade, float peso,float comprimento,
        string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele,
		string licenca_IBAMA, string UF_origem);

	ReptilNativo(string nome, string sexo, int idade, float peso,float comprimento,
        string habitat, int patas, string especie, string tipo_pele,
        string tipo_reproducao, string alimento, bool ameacadoDeEx,
        string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele,
		string licenca_IBAMA, string UF_origem);

	virtual ~ReptilNativo() {}
};
