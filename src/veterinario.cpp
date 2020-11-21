#include "veterinario.hpp"

Veterinario::Veterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv):
						Funcionario(matricula,nome,idade,celular,endereco,cpf,cargo), crmv(crmv){}

Veterinario::~Veterinario(){}

std::string Veterinario::getCrmv(){
	return this->crmv;
}

void Veterinario::setCrmv(std::string crmv){
	this->crmv=crmv;