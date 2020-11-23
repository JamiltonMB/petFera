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

std::ostream& Tratador::imprimeDados(std::ostream& o) const {
	o <<"Matricula: "<<this->matricula<<std::endl
		<<"Nome: "<<this->nome<<std::endl
		<<"Idade: "<<this->idade<<std::endl
		<<"Celular: "<<this->celular<<std::endl
		<<"Endereço: "<<this->endereco<<std::endl
		<<"CPF: "<<this->cpf<<std::endl
		<<"Cargo: "<<this->cargo<<std::endl
		<<"Nível de Segurança: "<<this->nivel_seguranca<<std::endl;
	return o;
}	