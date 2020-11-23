#include "aves.hpp"

Aves::Aves(double tamanho_bico, double corPenas) : Animal(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie,
                                                          tipo_pele, tipo_reproducao, alimento,
                                                          ameacadoDeEx, silvestreOuExotico, vetResponsavel,
                                                          tratadorResponsavel),
                                                   tamanho_bico(tamanho_bico), corPenas(corPenas)
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

double Aves::getCorPenas() const
{
    return corPenas;
}
void Aves::setCorPenas(double corPenas)
{
    this->corPenas = corPenas;
}

std::ostream &Aves::imprimirAves(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Tamanho do Bico: " << tamanho_bico << std::endl
       << " | Cor das Penas: " << corPenas << std::endl;
    return os;
}