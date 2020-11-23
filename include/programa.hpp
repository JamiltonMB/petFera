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
	bool adicionarVeterinario(Veterinario* novo);
	bool adicionarTratador(Tratador* novo);
	bool removerFuncionario(int matricula);
	void alterarFuncionario(int matricula);
	void listarFuncionario(int matricula);
	void listarTodosFuncionarios();

private:
	vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;
	vector<Funcionario*> funcionarios;
};

#endif