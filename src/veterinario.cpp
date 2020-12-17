#include "veterinario.hpp"

Veterinario::Veterinario(std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv):
						Funcionario(matricula,nome,idade,celular,endereco,cpf,cargo), crmv(crmv){
							this->isVeterinario=true;
						}
Veterinario::Veterinario(int id, std::string matricula, std::string nome, std::string idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv):
						Funcionario(id,matricula,nome,idade,celular,endereco,cpf,cargo), crmv(crmv){
							this->isVeterinario=true;
						}						

Veterinario::~Veterinario(){}

std::string Veterinario::getCrmv(){
	return this->crmv;
}

void Veterinario::setCrmv(std::string crmv){
	this->crmv=crmv;
}

std::ostream& Veterinario::imprimeDados(std::ostream& o) const {
	o <<"Matricula: "<<this->matricula<<std::endl
		<<"Nome: "<<this->nome<<std::endl
		<<"Idade: "<<this->idade<<std::endl
		<<"Celular: "<<this->celular<<std::endl
		<<"Endereço: "<<this->endereco<<std::endl
		<<"CPF: "<<this->cpf<<std::endl
		<<"Cargo: "<<this->cargo<<std::endl
		<<"CRMV: "<<this->crmv<<std::endl;
	return o;
}