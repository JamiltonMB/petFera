#include <iostream>
#include "programa.hpp"

int main(int argc, char const *argv[]){
	Programa programa;
	programa.cadastrarVeterinario("342423", "teste", 20, "33233", "casa", "010101", "veterinario", "3434");
	programa.cadastrarTratador("342423", "teste2", 20, "33233", "casa", "010101", "veterinario", "alto");
	programa.listarTodosFuncionarios();
	std::cout<<"Wello World"<<std::endl;
	return 0;
}