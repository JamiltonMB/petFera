#include "programa.hpp"

Programa::Programa(){
	veterinarios.clear();
	tratadores.clear();
}

Programa::~Programa(){}

void Programa::cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv){
	Veterinario* veterinario = new Veterinario(matricula, nome, idade, celular, endereco, cpf, cargo, crmv);
}

void cadastrarTratador(int matricula, std::string nome, int idade, int celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca){}

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

void listarTodosFuncionarios(){}