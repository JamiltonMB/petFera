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
	void cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);
	void cadastrarTratador(std::string matricula, std::string nome, int idade, std::string, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca);
	void cadastrarAnimal(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel);
	void removerAnimal(int id);
	void removerFuncionario(std::string matricula);
	void alterarFuncionario(std::string matricula);
	void listarFuncionario(std::string matricula);
	void listarTodosFuncionarios();
	
	//Métodos para interação com o usuário
	void run();
	void runFuncionario();
	void runAninal();
	void runCadastrarFuncionario();

private:
	vector<Funcionario*> funcionarios;
	vector<Animal*> animais;
	Funcionario* findFuncionario(std::string matricula);
	Animal* findAnimal(int id);
	Funcionario* editarFuncionario(Funcionario* funcionario);
};

#endif