#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <iostream>

class Funcionario
{
public:
	Funcionario(int matricula, std::string nome, int idade, int celular, std::string endereco, std::string cpf, std::string cargo);
	~Funcionario();
protected:
	int matricula;
	std::string nome;
	int idade;
	int celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
};

#endif