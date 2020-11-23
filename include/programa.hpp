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
	void cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
	void cadastrarTratador(std::string matricula, std::string nome, int idade, std::string, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca);
	void removerFuncionario(std::string matricula);
	void alterarFuncionario(std::string matricula);
	void listarFuncionario(std::string matricula);
	void listarTodosFuncionarios();

private:
	vector<Funcionario*> funcionarios;
	Funcionario* findFuncionario(std::string matricula);
};

#endif