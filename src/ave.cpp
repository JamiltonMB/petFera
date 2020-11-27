#include "ave.hpp"

Ave::Ave(double tamanho_bico, double corPenas) : Animal(id, nome, sexo, idade, peso, comprimento, ambiente, patas, especie,
                                                          tipo_pele, tipo_reproducao, alimento,
                                                          ameacadoDeEx, silvestreOuExotico, vetResponsavel,
                                                          tratadorResponsavel),
                                                   tamanho_bico(tamanho_bico), corPenas(corPenas)
{
}

double Ave::getTamanhoBico() const
{
    return tamanho_bico;
}
void Ave::setTamanhoBico(double tamanho_bico)
{
    this->tamanho_bico = tamanho_bico;
}

double Ave::getCorPenas() const
{
    return corPenas;
}
void Ave::setCorPenas(double corPenas)
{
    this->corPenas = corPenas;
}

std::ostream &Ave::imprimirAve(std::ostream &os) const
{
    imprimirAnimal(os);
    os << " | Tamanho do Bico: " << tamanho_bico << std::endl
       << " | Cor das Penas: " << corPenas << std::endl;
    return os;
}