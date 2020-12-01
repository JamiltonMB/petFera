#include "programa.hpp"

Programa::Programa()
{
	funcionarios.clear();
	animais.clear();
}

Programa::~Programa()
{
	funcionarios.clear();
	funcionarios.shrink_to_fit();
	animais.clear();
	animais.shrink_to_fit();
}

void Programa::cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv)
{
	//Veterinario *veterinario = new Veterinario(matricula, nome, idade, celular, endereco, cpf, cargo, crmv);
	//veterinario->setIsVeterinario(true);
	this->funcionarios.push_back(std::make_shared<Veterinario>(matricula, nome, idade, celular, endereco, cpf, cargo, crmv));
}

void Programa::cadastrarTratador(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca)
{
	//Tratador *tratador = new Tratador(matricula, nome, idade, celular, endereco, cpf, cargo, nivel_seguranca);
	//this->funcionarios.push_back(tratador);
	this->funcionarios.push_back(std::make_shared<Tratador>(matricula, nome, idade, celular, endereco, cpf, cargo, nivel_seguranca));
}

void Programa::cadastrarAnimal(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
							   int patas, string especie, string tipo_pele,
							   string alimento, string silvestreOuExotico, string vetResponsavel,
							   string tratadorResponsavel)
{
	this->animais.push_back(std::make_shared<Animal>(id, nome, sexo, idade, peso, comprimento,
													 patas, especie, tipo_pele,
													 alimento, silvestreOuExotico, vetResponsavel,
													 tratadorResponsavel));
}

void Programa::removerAnimal(size_t id)
{
	if (this->findAnimal(id) == nullptr)
	{
		std::cout << "Id inválido" << std::endl;
	}
	else
	{
		int index = 0;
		for (auto &animais : this->animais)
		{
			if (animais->getId() == id)
			{
				std::string nomeTemp = animais->getNome();
				this->animais.erase(this->animais.begin() + index);
				std::cout << "Animal " << nomeTemp << " removido" << std::endl;
				break;
			}
			index++;
		}
	}
}

void Programa::removerFuncionario(std::string matricula)
{
	if (this->findFuncionario(matricula) == nullptr)
	{
		std::cout << "Matrícula inexistente" << std::endl;
	}
	else
	{
		int index = 0;
		for (auto &funcionario : this->funcionarios)
		{
			if (funcionario->getMatricula() == matricula)
			{
				std::string nomeTemp = funcionario->getNome();
				this->funcionarios.erase(this->funcionarios.begin() + index);
				std::cout << "Funcionario " << nomeTemp << " removido" << std::endl;
				break;
			}
			index++;
		}
	}
}

void Programa::alterarFuncionario(std::string matricula)
{
	if (this->findFuncionario(matricula) == nullptr)
	{
		std::cout << "Matrícula inexistente" << std::endl;
	}
	else
	{
		for (auto &funcionario : this->funcionarios)
		{
			if (funcionario->getMatricula() == matricula)
			{
				editarFuncionario(funcionario);
			}
		}
	}
}

void Programa::alterarAnimal(size_t id)
{
	if (this->findAnimal(id) == nullptr)
	{
		std::cout << "Id inexistente" << std::endl;
	}
	else
	{
		for (auto &Animal : this->animais)
		{
			if (Animal->getId() == id)
			{
				editarAnimal(Animal);
			}
		}
	}
}

void Programa::listarFuncionario(std::string matricula)
{
	if (this->findFuncionario(matricula) == nullptr)
	{
		std::cout << "Matrícula inexistente" << std::endl;
	}
	else
	{
		for (auto &funcionario : this->funcionarios)
		{
			if (funcionario->getMatricula() == matricula)
			{
				std::cout << *funcionario << std::endl;
			}
		}
	}
}

void Programa::listarTodosFuncionarios()
{
	if (this->funcionarios.size() == 0)
	{
		std::cout << "Não há funcionários cadastrados." << std::endl;
	}
	else
	{
		for (auto &funcionario : this->funcionarios)
		{
			std::cout << *funcionario << std::endl;
		}
	}
}

void Programa::listarAnimal(size_t id)
{
	if (this->findAnimal(id) == nullptr)
	{
		std::cout << "Id inexistente" << std::endl;
	}
	else
	{
		for (auto &Animal : this->animais)
		{
			if (Animal->getId() == id)
			{
				std::cout << Animal << std::endl;
			}
		}
	}
}

void Programa::listarTodosAnimais()
{
	if (this->animais.size() == 0)
	{
		std::cout << "Não há animais cadastrados." << std::endl;
	}
	else
	{
		for (auto &Animal : this->animais)
		{
			std::cout << Animal << std::endl;
			std::cout << "====================================================" << std::endl;
		}
	}
}

std::shared_ptr<Funcionario> Programa::findFuncionario(std::string matricula)
{
	for (auto &funcionario : this->funcionarios)
	{
		if (funcionario->getMatricula() == matricula)
		{
			return funcionario;
		}
	}
	return nullptr;
}

std::shared_ptr<Animal> Programa::findAnimal(size_t id)
{
	for (auto &animais : this->animais)
	{
		if (animais->getId() == id)
		{
			return animais;
		}
	}
	return nullptr;
}

std::shared_ptr<Funcionario> Programa::editarFuncionario(std::shared_ptr<Funcionario> funcionario)
{
	int escolha = 0;
	std::string matricula;
	std::string nome;
	int idade;
	std::string celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
	std::string crmv;
	std::string nivel_seguranca;

	do
	{
		std::cout << "0-Sair | 1-Matricula | 2-Nome | 3-Idade | 4-Celular | 5-Endereço | 6-CPF | 7-Cargo | 8-CRVM/Nível de Segurança" << std::endl;
		std::cin >> escolha;
		switch (escolha)
		{
		case 0:
			break;
		case 1:
			std::cout << "Insira uma nova Matrícula: ";
			std::cin >> matricula;
			funcionario->setMatricula(matricula);
			break;
		case 2:
			std::cout << "Insira um novo Nome: ";
			std::cin >> nome;
			funcionario->setNome(nome);
			break;
		case 3:
			std::cout << "Insira uma nova Idade: ";
			std::cin >> idade;
			funcionario->setIdade(idade);
			break;
		case 4:
			std::cout << "Insira um novo Celular: ";
			std::cin >> celular;
			funcionario->setCelular(celular);
			break;
		case 5:
			std::cout << "Insira um novo Endereço: ";
			std::cin >> endereco;
			funcionario->setEndereco(endereco);
			break;
		case 6:
			std::cout << "Insira um novo CPF: ";
			std::cin >> cpf;
			funcionario->setCpf(cpf);
			break;
		case 7:
			std::cout << "Insira um novo Cargo: ";
			std::cin >> cargo;
			funcionario->setCargo(cargo);
			break;
		case 8:
			if (funcionario->getIsVeterinario())
			{
				std::cout << "Insira um novo CRMV: ";
				std::cin >> crmv;
				//dynamic_cast<Veterinario *>(funcionario)->setCrmv(crmv);
				//std::shared_ptr<Veterinario> f = std::dynamic_pointer_cast<Veterinario>(funcionario);
				std::dynamic_pointer_cast<Veterinario>(funcionario)->setCrmv(crmv);
				break;
			}
			else
			{
				std::cout << "Insira um novo Nível de Segurança: ";
				std::cin >> nivel_seguranca;
				//dynamic_cast<Tratador *>(funcionario)->setNivel_seguranca(nivel_seguranca);
				//std::shared_ptr<Tratador> f = std::dynamic_pointer_cast<Tratador>(funcionario);
				std::dynamic_pointer_cast<Tratador>(funcionario)->setNivel_seguranca(nivel_seguranca);
				break;
			}
		default:
			std::cout << "Parâmetro inválido" << std::endl;
			break;
		}
	} while (escolha != 0);
	return funcionario;
}

void Programa::run()
{
	int escolha = 0;
	std::cout << "1-Módulo de cadastrado de funcionarios\n2-Módulo de cadastro e manejo de animais\n3-Sair" << std::endl;
	std::cout << "Digite o número de uma das opções: ";
	std::cin >> escolha;
	switch (escolha)
	{
	case 1:
		this->runFuncionario();
		break;
	case 2:
		this->runAnimal();
	case 3:
		break;
	default:
		std::cout << "Parâmetro inválido" << std::endl;
		break;
	}
}

void Programa::runFuncionario()
{
	int escolha = 0;
	std::string matricula;
	std::cout << "1-Cadastar funcionário\n2-Deletar funcionario\n3-Editar funcionário\n4-Listar funcionário\n5-Listar todos os Funcionários\n6-Voltar" << std::endl;
	std::cout << "Digite o número de uma das opções: ";
	std::cin >> escolha;
	switch (escolha)
	{
	case 1:
		this->runCadastrarFuncionario();
		break;
	case 2:
		std::cout << "Informe a matrícula: ";
		std::cin >> matricula;
		this->removerFuncionario(matricula);
		std::cout << "Funcionário removido" << std::endl;
		this->run();
		break;
	case 3:
		std::cout << "Informe a matrícula: ";
		std::cin >> matricula;
		this->alterarFuncionario(matricula);
		std::cout << "Funcionário Alterado" << std::endl;
		this->run();
		break;
	case 4:
		std::cout << "Informe a matrícula: ";
		std::cin >> matricula;
		this->listarFuncionario(matricula);
		this->run();
		break;
	case 5:
		this->listarTodosFuncionarios();
		this->run();
		break;
	case 6:
		this->run();
		break;
	default:
		std::cout << "Parâmetro inválido" << std::endl;
		this->run();
		break;
	}
}
void Programa::runCadastrarFuncionario()
{
	std::string matricula;
	std::string nome;
	int idade;
	std::string celular;
	std::string endereco;
	std::string cpf;
	std::string cargo;
	std::string crmv;
	std::string nivel_seguranca;

	int escolha = 0;
	std::cout << "1-Cadastrar tratador\n2-Cadastrar veterinário\n3-Sair" << std::endl;
	std::cout << "Digite o número de uma das opções: ";
	std::cin >> escolha;
	if (escolha == 1 || escolha == 2)
	{
		std::cout << "Digite a matricula: ";
		std::cin >> matricula;
		std::cout << "Digite o nome: ";
		std::cin >> nome;
		std::cout << "Digite a idade: ";
		std::cin >> idade;
		std::cout << "Digite o celular: ";
		std::cin >> celular;
		std::cout << "Digite o endereço: ";
		std::cin >> endereco;
		std::cout << "Digite o cpf: ";
		std::cin >> cpf;
		std::cout << "Digite o cargo: ";
		std::cin >> cargo;
	}
	switch (escolha)
	{
	case 1:
		std::cout << "Digite o nivel de seguranca: ";
		std::cin >> nivel_seguranca;
		this->cadastrarTratador(matricula, nome, idade, celular, endereco, cpf, cargo, nivel_seguranca);
		std::cout << "Funcionário cadastrado" << std::endl;
		this->run();
		break;
	case 2:
		std::cout << "Digite o CRMV: ";
		std::cin >> crmv;
		this->cadastrarVeterinario(matricula, nome, idade, celular, endereco, cpf, cargo, crmv);
		std::cout << "Funcionário cadastrado" << std::endl;
		this->run();
		break;
	case 3:
		this->run();
		break;
	default:
		std::cout << "Parâmetro inválido" << std::endl;
		break;
	}
}
void Programa::runAnimal()
{
	int escolha = 0;
	int id;
	std::cout << "1-Cadastar animal\n2-Deletar animal\n3-Editar animal\n4-Listar animal\n5-Listar todos os animais\n6-Voltar" << std::endl;
	std::cout << "Digite o número de uma das opções: ";
	std::cin >> escolha;
	switch (escolha)
	{
	case 1:
		this->runCadastrarAnimal();
		break;
	case 2:
		std::cout << "Informe o Id: ";
		std::cin >> id;

		this->removerAnimal(id);
		std::cout << "Animal removido" << std::endl;
		this->run();
		break;
	case 3:
		std::cout << "Informe o Id: ";
		std::cin >> id;
		this->alterarAnimal(id);
		std::cout << "Animal Alterado" << std::endl;
		this->run();
		break;
	case 4:
		std::cout << "Informe o Id: ";
		std::cin >> id;
		this->listarAnimal(id);
		this->run();
		break;
	case 5:
		this->listarTodosAnimais();
		this->run();
		break;
	case 6:
		this->run();
		break;
	default:
		std::cout << "Parâmetro inválido" << std::endl;
		this->run();
		break;
	}
}

void Programa::runCadastrarAnimal()
{
	using std::string;
	size_t id;
	string nome;
	string sexo;
	int idade;
	float peso;
	float comprimento;
	int patas;
	string especie;
	string tipo_pele;
	string alimento;
	string silvestreOuExotico;
	string vetResponsavel;
	string tratadorResponsavel;

	std::cout << "Digite o id: ";
	std::cin >> id;
	std::cout << "Digite o nome: ";
	std::cin >> nome;
	std::cout << "Digite a sexo: ";
	std::cin >> sexo;
	std::cout << "Digite o idade: ";
	std::cin >> idade;
	std::cout << "Digite o peso: ";
	std::cin >> peso;
	std::cout << "Digite o comprimento ";
	std::cin >> comprimento;
	std::cout << "Digite a quantidade de patas: ";
	std::cin >> patas;
	std::cout << "Digite a especie: ";
	std::cin >> especie;
	std::cout << "Digite o tipo de pele: ";
	std::cin >> tipo_pele;
	std::cout << "Digite o alimento: ";
	std::cin >> alimento;
	std::cout << "Digite se é nativo ou exotico: ";
	std::cin >> silvestreOuExotico;
	std::cout << "Digite o veterinario responsavél: ";
	std::cin >> vetResponsavel;
	std::cout << "Digite o tratador responsavél: ";
	std::cin >> tratadorResponsavel;
	if (silvestreOuExotico == "nativo")
	{
		string licenca_IBAMA;
		string UF_origem;
		string ameacadoDeEx;
		string habitat;
		std::cout << "Digite a licenca do IBAMA: ";
		std::cin >> licenca_IBAMA;
		std::cout << "Digite a UF de origem: ";
		std::cin >> UF_origem;
		std::cout << "Digite se é ameaçado de extinção: ";
		std::cin >> ameacadoDeEx;
		std::cout << "Digite o habitat: ";
		std::cin >> habitat;
		if (especie == "reptil")
		{
			bool troca_de_pele;
			std::cout << "Digite 0 se ele não troca de pele ou 1 caso contrário: ";
			std::cin >> troca_de_pele;
			cadastrarReptilNativo(id, nome, sexo, idade, peso, comprimento,
								  patas, especie, tipo_pele,
								  alimento, silvestreOuExotico, vetResponsavel,
								  tratadorResponsavel, troca_de_pele, licenca_IBAMA, UF_origem,
								  ameacadoDeEx, habitat);
		}

		if (especie == "ave")
		{
			double tamanho_bico;
			string corPenas;
			std::cout << "Digite o tamanho do bico: ";
			std::cin >> tamanho_bico;
			std::cout << "Digite a cor das penas: ";
			std::cin >> corPenas;
			cadastrarAveNativo(id, nome, sexo, idade, peso,
							   comprimento, patas, especie, tipo_pele,
							   alimento, silvestreOuExotico, vetResponsavel,
							   tratadorResponsavel, tamanho_bico, corPenas,
							   licenca_IBAMA, UF_origem, ameacadoDeEx,
							   habitat);
		}

		if (especie == "anfibio")
		{
			int total_mudas;
			std::cout << "Digite o total de mudas: ";
			std::cin >> total_mudas;
			cadastrarAnfibioNativo(id, nome, sexo, idade, peso,
								   comprimento, patas, especie, tipo_pele,
								   alimento, silvestreOuExotico, vetResponsavel,
								   tratadorResponsavel, total_mudas, licenca_IBAMA, UF_origem,
								   ameacadoDeEx, habitat);
		}

		if (especie == "mamifero")
		{
			string cor_pelo;
			string dentes;
			std::cout << "Digite a cor do pelo: ";
			std::cin >> cor_pelo;
			std::cout << "Digite o tipo de dente: ";
			std::cin >> dentes;
			cadastrarMamiferoNativo(id, nome, sexo, idade, peso,
									comprimento, patas, especie, tipo_pele,
									alimento, silvestreOuExotico, vetResponsavel,
									tratadorResponsavel, cor_pelo, dentes,
									licenca_IBAMA, UF_origem, ameacadoDeEx,
									habitat);
		}
	}
	else if (silvestreOuExotico == "exotico")
	{
	}
	else
	{
	}
}

void Programa::cadastrarMamiferoNativo(size_t id, string nome, string sexo, int idade, float peso,
									   float comprimento, int patas, string especie, string tipo_pele,
									   string alimento, string silvestreOuExotico, string vetResponsavel,
									   string tratadorResponsavel, string cor_pelo, string dentes,
									   string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
									   string habitat)
{
	this->animais.push_back(std::make_shared<MamiferoNativo>(id, nome, sexo, idade, peso,
															 comprimento, patas, especie, tipo_pele,
															 alimento, silvestreOuExotico, vetResponsavel,
															 tratadorResponsavel, cor_pelo, dentes,
															 licenca_IBAMA, UF_origem, ameacadoDeEx,
															 habitat));
}

void Programa::cadastrarAnfibioNativo(size_t id, string nome, string sexo, int idade, float peso,
									  float comprimento, int patas, string especie, string tipo_pele,
									  string alimento, string silvestreOuExotico, string vetResponsavel,
									  string tratadorResponsavel, int total_mudas, string licenca_IBAMA, string UF_origem,
									  string ameacadoDeEx, string habitat)
{
	this->animais.push_back(std::make_shared<AnfibioNativo>(id, nome, sexo, idade, peso,
															comprimento, patas, especie, tipo_pele,
															alimento, silvestreOuExotico, vetResponsavel,
															tratadorResponsavel, total_mudas, licenca_IBAMA, UF_origem,
															ameacadoDeEx, habitat));
}

void Programa::cadastrarAveNativo(size_t id, string nome, string sexo, int idade, float peso,
								  float comprimento, int patas, string especie, string tipo_pele,
								  string alimento, string silvestreOuExotico, string vetResponsavel,
								  string tratadorResponsavel, double tamanho_bico, string corPenas,
								  string licenca_IBAMA, string UF_origem, string ameacadoDeEx,
								  string habitat)
{
	this->animais.push_back(std::make_shared<AveNativo>(id, nome, sexo, idade, peso,
														comprimento, patas, especie, tipo_pele,
														alimento, silvestreOuExotico, vetResponsavel,
														tratadorResponsavel, tamanho_bico, corPenas,
														licenca_IBAMA, UF_origem, ameacadoDeEx,
														habitat));
}

void Programa::cadastrarReptilNativo(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
									 int patas, string especie, string tipo_pele,
									 string alimento, string silvestreOuExotico, string vetResponsavel,
									 string tratadorResponsavel, bool troca_de_pele, string licenca_IBAMA, string UF_origem,
									 string ameacadoDeEx, string habitat)
{
	this->animais.push_back(std::make_shared<ReptilNativo>(id, nome, sexo, idade, peso, comprimento,
															patas, especie, tipo_pele,
															alimento, silvestreOuExotico, vetResponsavel,
															tratadorResponsavel, troca_de_pele, licenca_IBAMA, UF_origem,
															ameacadoDeEx, habitat));
}

std::shared_ptr<Animal> Programa::editarAnimal(std::shared_ptr<Animal> animal)
{
	using std::string;

	int escolha = 0;
	int id;
	string nome;
	string sexo;
	int idade;
	float peso;
	float comprimento;
	string ambiente; //habitat
	int patas;
	string especie;
	string tipo_pele;
	string tipo_reproducao;
	string alimento;
	string ameacadoDeEx;
	string silvestreOuExotico;
	string vetResponsavel;
	string tratadorResponsavel;

	do
	{
		std::cout << "0-Sair | 1-Id | 2-Nome | 3-Sexo | 4-Idade | 5-Peso | 6-Comprimento | "
				  << "7-Ambiente | 8-Patas | 9-Especie | 10-Tipo de Pele | 11-Tipo de Rprodução | "
				  << "12-Alimento | 13-Ameaçado de Extinção | 14-Silvestre ou Exótico | 15-Veterinario | "
				  << "16-Tratador" << std::endl;
		std::cin >> escolha;
		switch (escolha)
		{
		case 0:
			break;
		case 1:
			std::cout << "Insira um novo Id: ";
			std::cin >> id;
			animal->setId(id);
			break;
		case 2:
			std::cout << "Insira um novo Nome: ";
			std::cin >> nome;
			animal->setNome(nome);
			break;
		case 3:
			std::cout << "Insira um novo Sexo: ";
			std::cin >> sexo;
			animal->setSexo(sexo);
			break;
		case 4:
			std::cout << "Insira uma nova Idade: ";
			std::cin >> idade;
			animal->setIdade(idade);
			break;
		case 5:
			std::cout << "Insira um novo Peso: ";
			std::cin >> peso;
			animal->setPeso(peso);
			break;
		case 6:
			std::cout << "Insira um novo Comprimento: ";
			std::cin >> comprimento;
			animal->setComprimento(comprimento);
			break;
		case 7:
			std::cout << "Insira um numero de Patas: ";
			std::cin >> patas;
			animal->setPatas(patas);
			break;
		case 8:
			std::cout << "Insira uma nova Especie: ";
			std::cin >> especie;
			animal->setEspecie(especie);
			break;
		case 9:
			std::cout << "Insira um novo Tipo de Pele: ";
			std::cin >> tipo_pele;
			animal->setTipo_pele(tipo_pele);
			break;
		case 10:
			std::cout << "Insira um novo Alimento: ";
			std::cin >> alimento;
			animal->setAlimento(alimento);
			break;
		case 11:
			std::cout << "Insira se é Silvestre ou Exotico: ";
			std::cin >> silvestreOuExotico;
			animal->setSilvestreOuExotico(silvestreOuExotico);
			break;
		case 12:
			std::cout << "Insira Veterinário Responsavel: ";
			std::cin >> vetResponsavel;
			animal->setVetResponsavel(vetResponsavel);
			break;
		case 13:
			std::cout << "Insira Tratador Responsavel: ";
			std::cin >> tratadorResponsavel;
			animal->setTratadorResponsavel(tratadorResponsavel);
			break;
		default:
			std::cout << "Parâmetro inválido" << std::endl;
			break;
		}
	} while (escolha != 0);

	return animal;
}
;