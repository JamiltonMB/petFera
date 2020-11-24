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
std::string Funcionario::getEndereco(){
	return this->endereco;
}
std::string Funcionario::getCpf(){
	return this->cpf;
}
std::string Funcionario::getCargo(){
	return this->cargo;
}
bool Funcionario::getIsVeterinario(){
	return this->isVeterinario;
}

void Funcionario::setMatricula(std::string matricula){
	this->matricula=matricula;
}
void Funcionario::setNome(std::string nome){
	this->nome=nome;
}
void Funcionario::setIdade(int idade){
	this->idade=idade;
}
void Funcionario::setCelular(std::string celular){
	this->celular=celular;
}
void Funcionario::setEndereco(std::string endereco){
	this->endereco=endereco;
}
void Funcionario::setCpf(std::string cpf){
	this->cpf=cpf;
}
void Funcionario::setCargo(std::string cargo){
	this->cargo=cargo;
}
void Funcionario::setIsVeterinario(bool b){
	this->isVeterinario=b;
}

std::ostream& operator<< (std::ostream& o, Funcionario const &func) {
	return func.imprimeDados(o);
}