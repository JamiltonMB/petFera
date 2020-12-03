#pragma once

#include "reptil.hpp"
#include "nativo.hpp"

class ReptilNativo : public Reptil, public Nativo
{
public:
	ReptilNativo(int id, string nome, string sexo, int idade, float peso, float comprimento, string ambiente, int patas,
				 string especie, string tipo_pele, string tipo_reproducao, string alimento, string ameacadoDeEx,
				 string silvestreOuExotico, string vetResponsavel, string tratadorResponsavel, bool troca_de_pele,
				 string licenca_IBAMA, string UF_origem);
	virtual ~ReptilNativo() {}

	std::ostream &imprimeDados(std::ostream &o);
};
