#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <iostream>
#include "funcionario.hpp"

class Veterinario : public Funcionario{
	public:
		Veterinario(std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
		Veterinario(int id, std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
		~Veterinario();

		std::string getCrmv();

		void setCrmv(std::string crmv);
		std::ostream& imprimeDados(std::ostream& o) const;
	
	protected:
		std::string crmv;
};

#endif