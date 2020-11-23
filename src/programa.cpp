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

bool adicionarVeterinario(Veterinario* novo){
	return true;
}

bool adicionarTratador(Tratador* novo){
	return true;
}

bool removerFuncionario(int matricula){
	return true;
}

void alterarFuncionario(int matricula){}

void Programa::listarFuncionario(int matricula){}

void Programa::listarTodosFuncionarios(){
	
	if (this->funcionarios.size()==0) {
		std::cout << "Não há funcionários cadastrados." << std::endl;
	} else {
		for (auto& funcionario : this->funcionarios)
		{
			//funcionario = dynamic_cast<Veterinario*> (funcionario);
			std::cout << (funcionario->getNome()) << std::endl;
			if(funcionario->getIsVeterinario()){
				std::cout << (dynamic_cast<Veterinario*> (funcionario)->getCrmv()) << std::endl;
			}
		}
		
	}

}