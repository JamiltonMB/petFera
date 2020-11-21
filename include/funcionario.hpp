#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

class Funcionario
{
public:
	Funcionario(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo);
	~Funcionario();
protected:
	int matricula;
	string nome;
	int idade;
	int celular;
	string endereco;
	string cpf;
	string cargo;
};

#endif