#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <iostream>

class Funcionario
{
public:
	Funcionario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo);
	~Funcionario();
protected:
	std::string matricula;
	std::string nome;
	int idade;
	std::string celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
};

#endif