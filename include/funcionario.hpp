#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <iostream>

class Funcionario
{
public:
	Funcionario(std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo);
	Funcionario(int id, std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo);
	virtual ~Funcionario();
	
	int getId();
	std::string getMatricula();
	std::string getNome();
	std::string getIdade();
	std::string getCelular();
	std::string getEndereco();
	std::string getCpf();
	std::string getCargo();
	bool getIsVeterinario();

	void setMatricula(std::string matricula);
	void setNome(std::string nome);
	void setIdade(std::string idade);
	void setCelular(std::string celular);
	void setEndereco(std::string endereco);
	void setCpf(std::string cpf);
	void setCargo(std::string cargo);
	void setIsVeterinario(bool b);

	virtual std::ostream& imprimeDados(std::ostream& o) const = 0;

	//bool operator==(const Conta& outro) const;

	friend std::ostream& operator<< (std::ostream& o, Funcionario const &f);

protected:
	int id;
	std::string matricula;
	std::string nome;
	std::string idade;
	std::string celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
	bool isVeterinario=false;
};

#endif