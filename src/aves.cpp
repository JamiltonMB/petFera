#pragma once
#include "aves.hpp"

Aves::Aves(double tamanho_bico, double envergadura_asas) : Animal(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie,
                                                                  tipo_pele, tipo_reproducao, alimento,
                                                                  ameacadoDeEx, silvestreOuExotico, vetResponsavel,
                                                                  tratadorResponsavel),
                                                           tamanho_bico(tamanho_bico), envergadura_asas(envergadura_asas)
{
}

double Aves::getTamanhoBico() const
{
    return tamanho_bico;
}
void Aves::setTamanhoBico(double tamanho_bico)
{
    this->tamanho_bico = tamanho_bico;
}

double Aves::getEnvergaduraAsas() const
{
    return envergadura_asas;
}
void Aves::setEnvergaduraAsas(double envergadura_asas)
{
    this->envergadura_asas = envergadura_asas;
}

std::ostream &Aves::imprimirAves(std::ostream &os) const
{
    imprimirAnimal(os);
    os<<" | Tamanho do Bico: "<<tamanho_bico<<std::endl
      <<" | Envergadura das Asas: "<<envergadura_asas<<std::endl;
    return os;
}