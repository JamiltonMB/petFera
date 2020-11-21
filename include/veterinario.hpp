#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>
#include "funcionario.hpp"

class Veterinario : public Funcionario{
	public:
		Veterinario(int matricula, std::string nome, int idade, int celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
		std::string crmv;
};

#endif