#ifndef _PROGRAMA_H_
#define _PROGRAMA_H_

#include <iostream>
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"
#include <vector>
#include <string>

using std::vector;

class Programa {
public:
	Programa();
	~Programa();
	void cadastrarVeterinario(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string crmv);
	void cadastrarTratador(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string nivel_seguranca);
	bool adicionarVeterinario(Veterinario* novo);
	bool adicionarTratador(Tratador* novo);
	bool removerFuncionario(int matricula);
	void alterarFuncionario(int matricula);
	void listarFuncionario(int matricula);
	void listarTodosFuncionarios();

private:
	vector<Veterinario*> veterinarios;
	vector<Tratador*> tratadores;
	vector<Animal*> animais; 
};

#endif