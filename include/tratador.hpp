#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>
#include "funcionario.hpp"

class Tratador : public Funcionario
{
public:
	Tratador(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca);
	~Tratador();
	
	std::string getNivel_seguranca();

	void setNivel_seguranca(std::string nivel_seguranca);

protected:
	std::string nivel_seguranca;

};

#endif