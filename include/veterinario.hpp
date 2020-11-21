#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>
#include "funcionario.hpp"

class Veterinario : public Funcionario{
	public:
		Veterinario(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string crmv);
		string crmv;
};

#endif