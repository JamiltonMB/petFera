#include "funcionario.hpp"

Funcionario::Funcionario(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo):
						matricula(matricula),nome(nome),idade(idade),celular(celular),endereco(endereco),cpf(cpf),cargo(cargo){}

Funcionario::~Funcionario(){}

int Funcionario::getMatricula(){
	return this->matricula;
}
string Funcionario::getNome(){
	return this->nome;
}
int Funcionario::getIdade(){
	return this->idade;
}
int Funcionario::getCelular(){
	return this->celular;
}
string Funcionario::getEnderaco(){
	return this->endereco;
}
string Funcionario::getCpf(){
	return this->cpf;
}
string Funcionario::getCargo(){
	return this->cargo;
}
