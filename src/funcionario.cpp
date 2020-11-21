#include "funcionario.hpp"

Funcionario::Funcionario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo):
						matricula(matricula),nome(nome),idade(idade),celular(celular),endereco(endereco),cpf(cpf),cargo(cargo){}

Funcionario::~Funcionario(){}

std::string Funcionario::getMatricula(){
	return this->matricula;
}
std::string Funcionario::getNome(){
	return this->nome;
}
int Funcionario::getIdade(){
	return this->idade;
}
std::string Funcionario::getCelular(){
	return this->celular;
}
std::string Funcionario::getEnderaco(){
	return this->endereco;
}
std::string Funcionario::getCpf(){
	return this->cpf;
}
std::string Funcionario::getCargo(){
	return this->cargo;
}

void Funcionario::getMatricula(std::string matricula){

}