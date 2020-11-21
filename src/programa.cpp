#include "programa.hpp"

Programa::Programa(){
	veterinarios.clear();
	tratadores.clear();
}
Programa::~Programa(){}

void cadastrarVeterinario(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string crmv){}

void cadastrarTratador(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string nivel_seguranca){}

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

void listarFuncionario(int matricula){}

void listarTodosFuncionarios(){}