#include "programa.hpp"

Programa::Programa(){
	funcionarios.clear();
}

Programa::~Programa(){}

void Programa::cadastrarVeterinario(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string crmv){
	Veterinario* veterinario = new Veterinario(matricula, nome, idade, celular, endereco, cpf, cargo, crmv);
	veterinario->setIsVeterinario(true);
	this->funcionarios.push_back(veterinario);
}

void Programa::cadastrarTratador(std::string matricula, std::string nome, int idade, std::string celular, std::string endereco, std::string cpf, std::string cargo, std::string nivel_seguranca){
	Tratador* tratador = new Tratador(matricula, nome, idade, celular, endereco, cpf, cargo, nivel_seguranca);
	this->funcionarios.push_back(tratador);
}

void Programa::removerFuncionario(std::string matricula){
	if(this->findFuncionario(matricula)==nullptr){
		std::cout<<"Matrícula inexistente"<<std::endl;
	}else{
		int index = 0;
		for (auto& funcionario : this->funcionarios)
		{
			if (funcionario->getMatricula()==matricula)
			{	
				std::string nomeTemp = funcionario->getNome();
				this->funcionarios.erase(this->funcionarios.begin()+index);
				std::cout<<"Funcionario "<<nomeTemp<<" removido"<<std::endl;
				break;
			}
			index++;
		}
	}
}

void Programa::alterarFuncionario(std::string matricula){
	if(this->findFuncionario(matricula)==nullptr){
		std::cout<<"Matrícula inexistente"<<std::endl;
	}else{
		for(auto& funcionario : this->funcionarios){
			if(funcionario->getMatricula()==matricula){
				editarFuncionario(funcionario);
			}
		}
	}
}

void Programa::listarFuncionario(std::string matricula){
	if(this->findFuncionario(matricula)==nullptr){
		std::cout<<"Matrícula inexistente"<<std::endl;
	}else{
		for(auto& funcionario : this->funcionarios){
			if(funcionario->getMatricula()==matricula){
				if(funcionario->getIsVeterinario()){
					std::cout << *(dynamic_cast<Veterinario*> (funcionario)) << std::endl;
				}else{
					std::cout << *(dynamic_cast<Tratador*> (funcionario)) << std::endl;
				}
			}
		}
	}
}

void Programa::listarTodosFuncionarios(){
	if (this->funcionarios.size()==0) {
		std::cout << "Não há funcionários cadastrados." << std::endl;
	} else {
		for (auto& funcionario : this->funcionarios)
		{
			if(funcionario->getIsVeterinario()){
				std::cout << *(dynamic_cast<Veterinario*> (funcionario)) << std::endl;
			}else{
				std::cout << *(dynamic_cast<Tratador*> (funcionario)) << std::endl;
			}
		}		
	}
}

Funcionario* Programa::findFuncionario(std::string matricula){
	for (auto& funcionario : this->funcionarios)
		{
			if (funcionario->getMatricula()==matricula)
			{
				return funcionario;
			}
		}
	return nullptr;
}

Funcionario* Programa::editarFuncionario(Funcionario* funcionario){
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

	do{
		std::cout<<"0-Sair | 1-Matricula | 2-Nome | 3-Idade | 4-Celular | 5-Endereço | 6-CPF | 7-Cargo | 8-CRVM/Nível de Segurança"<<std::endl;
		std::cin>>escolha;
		switch(escolha){
			case 0:
				break;
			case 1:
				std::cout<<"Insira uma nova Matrícula: ";
				std::cin>>matricula;
				funcionario->setMatricula(matricula);
				break;	
			case 2:
				std::cout<<"Insira um novo Nome: ";
				std::cin>>nome;
				funcionario->setNome(nome);
				break;
			case 3:
				std::cout<<"Insira uma nova Idade: ";
				std::cin>>idade;
				funcionario->setIdade(idade);
				break;
			case 4:
				std::cout<<"Insira um novo Celular: ";
				std::cin>>celular;
				funcionario->setCelular(celular);
				break;
			case 5:
				std::cout<<"Insira um novo Endereço: ";
				std::cin>>endereco;
				funcionario->setEndereco(endereco);
				break;
			case 6:
				std::cout<<"Insira um novo CPF: ";
				std::cin>>cpf;
				funcionario->setCpf(cpf);
				break;
			case 7:
				std::cout<<"Insira um novo Cargo: ";
				std::cin>>cargo;
				funcionario->setCargo(cargo);
				break;
			case 8:
				if(funcionario->getIsVeterinario()){
					std::cout<<"Insira um novo CRMV: ";
					std::cin>>crmv;
					dynamic_cast<Veterinario*> (funcionario)->setCrmv(crmv);
					break;
				}else{
					std::cout<<"Insira um novo Nível de Segurança: ";
					std::cin>>nivel_seguranca;
					dynamic_cast<Tratador*> (funcionario)->setNivel_seguranca(nivel_seguranca);
					break;						
				}
			default:
				std::cout<<"Parâmetro inválido"<<std::endl;
				break;
		}	
	}while(escolha!=0);

	return funcionario;
}