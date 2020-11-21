#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>
#include "funcionario.hpp"

class Veterinario : public Funcionario{
	public:
		Veterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
		~Veterinario();

		std::string getCrmv();

		void setCrmv(std::string crmv);
	
	protected:
		std::string crmv;
};

#endif