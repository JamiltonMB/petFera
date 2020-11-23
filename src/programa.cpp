#include "programa.hpp"

Programa::Programa(){
	veterinarios.clear();
	tratadores.clear();
}

Programa::~Programa(){}

void Programa::cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv){
	Veterinario* veterinario = new Veterinario(matricula, nome, idade, celular, endereco, cpf, cargo, crmv);
	veterinario->setIsVeterinario(true);
	this->funcionarios.push_back(veterinario);
}

void Programa::cadastrarTratador(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca){
	Tratador* tratador = new Tratador(matricula, nome, idade, celular, endereco, cpf, cargo, nivel_seguranca);
	this->funcionarios.push_back(tratador);
}

bool Programa::removerFuncionario(std::string matricula){
	return true;
}

void Programa::alterarFuncionario(std::string matricula){}

void Programa::listarFuncionario(std::string matricula){}

void Programa::listarTodosFuncionarios(){
	if (this->funcionarios.size()==0) {
		std::cout << "Não há funcionários cadastrados." << std::endl;
	} else {
		for (auto& funcionario : this->funcionarios)
		{
			//funcionario = dynamic_cast<Veterinario*> (funcionario);
			//std::cout << (funcionario->getNome()) << std::endl;
			if(funcionario->getIsVeterinario()){
				std::cout << *(dynamic_cast<Veterinario*> (funcionario)) << std::endl;
				//std::cout << (dynamic_cast<Veterinario*> (funcionario)->getCrmv()) << std::endl;
			}else{
				std::cout << *(dynamic_cast<Tratador*> (funcionario)) << std::endl;
			}
		}		
	}
}