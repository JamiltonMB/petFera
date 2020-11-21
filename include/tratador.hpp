#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include <iostream>
#include "funcionario.hpp"

class Tratador : public Funcionario
{
public:
	Tratador(int matricula, string nome, int idade, int celular, string endereco, string cpf, string cargo, string nivel_seguranca);
	string nivel_seguranca;
};

#endif