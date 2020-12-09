#ifndef _PROGRAMA_H_
#define _PROGRAMA_H_

#include <iostream>
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "animal.hpp"
#include "anfibio.hpp"
#include "anfibioNativo.hpp"
#include "anfibioExotico.hpp"
#include "anfibioDomestico.hpp"
#include "reptil.hpp"
#include "reptilDomestico.hpp"
#include "reptilExotico.hpp"
#include "reptilNativo.hpp"
#include "aveNativo.hpp"
#include "aveDomestica.hpp"
#include "aveExotico.hpp"
#include "mamifero.hpp"
#include "mamiferoNativo.hpp"
#include "mamiferoExotico.hpp"
#include "mamiferoDomestico.hpp"
#include <vector>
#include <string>
#include <memory>

using std::vector;

class Programa
{
public:
	Programa();
	~Programa();
	void //Recebe os atributos necessários para instanciar um objeto da classe veterinário e adiciona o referido objeto no vector funcionários
	cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv);

	void //Recebe os atributos necessários para instanciar um objeto da classe tratador e adiciona o referido objeto no vector funcionários
	cadastrarTratador(std::string matricula, std::string nome, int idade, std::string, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca);

	void //Recebe os atributos necessários para instanciar um objeto da classe animal e adiciona o referido objeto no vector animal
	cadastrarAnimal(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
					string habitat, int patas, string especie, string tipo_pele,
					string tipo_reproducao, string alimento, bool ameacadoDeEx,
					string vetResponsavel, string tratadorResponsavel, tpAnimal tipo);

	void cadastrarAnfibioNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								string habitat, int patas, string especie, string tipo_pele,
								string tipo_reproducao, string alimento, bool ameacadoDeEx,
								string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas, string licenca_IBAMA, string UF_origem);

	void cadastrarAnfibioExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								 string habitat, int patas, string especie, string tipo_pele,
								 string tipo_reproducao, string alimento, bool ameacadoDeEx,
								 string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas,
								 string pais_origem);

	void cadastrarAnfibioDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								   string habitat, int patas, string especie, string tipo_pele,
								   string tipo_reproducao, string alimento, bool ameacadoDeEx,
								   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, int total_mudas);

	void cadastrarReptilNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							   string habitat, int patas, string especie, string tipo_pele,
							   string tipo_reproducao, string alimento, bool ameacadoDeEx,
							   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele,
							   string licenca_IBAMA, string UF_origem);

	void cadastrarReptilExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								string habitat, int patas, string especie, string tipo_pele,
								string tipo_reproducao, string alimento, bool ameacadoDeEx,
								string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele, string pais_origem);

	void cadastrarReptilDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								  string habitat, int patas, string especie, string tipo_pele,
								  string tipo_reproducao, string alimento, bool ameacadoDeEx,
								  string vetResponsavel, string tratadorResponsavel, tpAnimal tipo ,bool troca_de_pele);

	void cadastrarAveNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							string habitat, int patas, string especie, string tipo_pele,
							string tipo_reproducao, string alimento, bool ameacadoDeEx,
							string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas,
							string licenca_IBAMA, string UF_origem);

	void cadastrarAveExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							 string habitat, int patas, string especie, string tipo_pele,
							 string tipo_reproducao, string alimento, bool ameacadoDeEx,
							 string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas,
							 string pais_origem);

	void cadastrarAveDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							   string habitat, int patas, string especie, string tipo_pele,
							   string tipo_reproducao, string alimento, bool ameacadoDeEx,
							   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, double tamanho_bico, string corPenas);

	void cadastrarMamiferoNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								 string habitat, int patas, string especie, string tipo_pele,
								 string tipo_reproducao, string alimento, bool ameacadoDeEx,
								 string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes, string licenca_IBAMA,
								 string UF_origem);

	void cadastrarMamiferoExotico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
								  string habitat, int patas, string especie, string tipo_pele,
								  string tipo_reproducao, string alimento, bool ameacadoDeEx,
								  string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes, string pais_origem);

	void cadastrarMamiferoDomestico(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
									string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
									string alimento, bool ameacadoDeEx, string vetResponsavel,
									string tratadorResponsavel, tpAnimal tipo, string cor_pelo, string dentes);

	void //Recebe um ID e verifica se existe algum objeto no vector de animais com esse ID, caso tenho o objeto será removido do vector
	removerAnimal(size_t id);

	void //Recebe uma matrícula e verifica se existe algum objeto no vector de funcionários com essa matrícula, caso tenho o objeto será removido do vector
	removerFuncionario(std::string matricula);

	void //Recebe uma matrícula e verifica se existe algum objeto no vector de funcionários com essa matrícula, caso tenha será mostrado um menu de opções para edição do funcionário
	alterarFuncionario(std::string matricula);

	void //Recebe uma matrícula e verifica se existe algum objeto no vector de funcionários com essa matrícula, caso tenha o funcinário será impresso no terminal
	listarFuncionario(std::string matricula);

	void //Lista todos os objetos do vector de funcionários
	listarTodosFuncionarios();

	//Métodos para interação com o usuário

	void //Método principal para execução do programa, mostrando um menu que dá acesso aos módulos do programa
	run();

	void //Método de acesso ao módulo de funcionários, as opções são dispostas em forma de menu
	runFuncionario();

	void //Método de acesso ao módulo de animais, as opções são dispostas em forma de menu
	runAnimal();

	void //Método para o usúario informar os valores dos atributos para instanciar e adicionar um objeto de tipo veterinário ou tratador no vector funcionários
	runCadastrarFuncionario();

	void //Recebe um ID e verifica se existe algum objeto no vector de animais com esse ID, caso tenha será mostrado um menu de opções para edição do animal
	alterarAnimal(size_t id);

	void //Recebe um ID e verifica se existe algum objeto no vector de animais com esse ID, caso tenha o animal será impresso no terminal
	listarAnimal(size_t id);

	void //Lista todos os objetos do vector de animais
	listarTodosAnimais();

	void //Método para o usúario informar os valores dos atributos para instanciar e adicionar um objeto de tipo animal no vector de animais
	runCadastrarAnimal();

	//métodos dos animais que faltavam:
	void cadastrarReptilNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							   string habitat, int patas, string especie, string tipo_pele,
							   string tipo_reproducao, string alimento, bool ameacadoDeEx,
							   string vetResponsavel, string tratadorResponsavel, tpAnimal tipo, bool troca_de_pele, string licenca_IBAMA, string UF_origem);

private:
	//vector<Funcionario*> funcionarios; //vector de objetos da classe Funcionario
	vector<std::shared_ptr<Funcionario>> funcionarios;
	vector<std::shared_ptr<Animal>> animais; //vector de objetos da classe Animal
	//vector<Animal*> animais; //vector de objetos da classe Animal
	std::shared_ptr<Funcionario> findFuncionario(std::string matricula); //Método para verificar se um objeto(funcionário) existe no vector de funcionários
	//Animal* findAnimal(int id); //Método para verificar se um objeto(anial) existe no vector de animais
	std::shared_ptr<Animal> findAnimal(size_t id);												  //Método para verificar se um objeto(anial) existe no vector de animais
	std::shared_ptr<Funcionario> editarFuncionario(std::shared_ptr<Funcionario> funcionario); //Método chamado pelo método alterarFuncionario para fazer o set dos atributos e apresentar um menu de opções
	std::shared_ptr<Animal> editarAnimal(std::shared_ptr<Animal> animal);					  //Método chamado pelo método alterarAninal para fazer o set dos atributos e apresentar um menu de opções
																							  //Animal* editarAnimal(Animal* animal); //Método chamado pelo método alterarAninal para fazer o set dos atributos e apresentar um menu de opções
};

#endif