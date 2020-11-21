#ifndef _PROGRAMA_H_
#define _PROGRAMA_H_

#include <iostream>
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include <vector>
#include <string>

using std::vector;

class Programa {
public:
	Programa();
	~Programa();
	bool adicionarFuncionario(Funcionario* novo);
	bool removerFuncionario(int matricula);
	void alterarFuncionario(int matricula);
	void listarFuncionario(int matricula);
	void listarTodosFuncionarios();

private:
	vector<Funcionario*> funcionarios;
};

#endif