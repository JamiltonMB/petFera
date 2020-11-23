#include <iostream>
#include "programa.hpp"

int main(int argc, char const *argv[]){
	Programa* programa = new Programa();
	programa->cadastrarVeterinario("342423", "teste", 20, "33233", "casa", "010101", "veterinario", "3434");
	programa->cadastrarTratador("342424", "teste2", 20, "33233", "casa", "010101", "veterinario", "alto");
	programa->listarTodosFuncionarios();
	programa->removerFuncionario("342424");
	programa->listarTodosFuncionarios();
	return 0;
}