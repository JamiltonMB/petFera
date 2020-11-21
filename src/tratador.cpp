#include "tratador.hpp"

Tratador::Tratador(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca):
						Funcionario(matricula,nome,idade,celular,endereco,cpf,cargo), nivel_seguranca(nivel_seguranca){}

Tratador::~Tratador(){}

std::string Tratador::getNivel_seguranca(){
	return this->nivel_seguranca;
}

void Tratador::setNivel_seguranca(std::string nivel_seguranca){
	this->nivel_seguranca=nivel_seguranca;
}	