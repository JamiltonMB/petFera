#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <iostream>

class Funcionario
{
public:
	Funcionario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo);
	virtual ~Funcionario();
	std::string getMatricula();
	std::string getNome();
	int getIdade();
	std::string getCelular();
	std::string getEnderaco();
	std::string getCpf();
	std::string getCargo();
	bool getIsVeterinario();

	void setMatricula(std::string matricula);
	void setNome(std::string nome);
	void setIdade(int idade);
	void setCelular(std::string celular);
	void setEnderco(std::string endereco);
	void setCpf(std::string cpf);
	void setCargo(std::string cargo);
	void setIsVeterinario(bool b);	
protected:
	std::string matricula;
	std::string nome;
	int idade;
	std::string celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
	bool isVeterinario=false;
};

#endif