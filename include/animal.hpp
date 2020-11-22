#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
using std::string;

class Animal
{
protected:
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

public:
    Animal(int id, string nome, string sexo, int idade, float peso, float comprimento,
           string ambiente, int patas, string especie, string tipo_pele, string tipo_reproducao,
           string alimento, string ameacadoDeEx, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel) {}
    ~Animal();

    string getNome() const;
    void setNome(string nome);

    string getSexo() const;
    void setSexo(string sexo);

    int getIdade() const;
    void setIdade(int idade);

    float getPeso() const;
    void setPeso(float peso);

    float getComprimento() const;
    void setComprimento(float comprimento);

    string getAmbiente() const;
    void setAmbiente(string ambiente);

    int getPatas() const;
    void setPatas(int patas);

    string getEspecie() const;
    void setEspecie(string especie);

    string getTipo_pele() const;
    void setTipo_pele(string tipo_pele);

    string getTipo_reproducao() const;
    void setTipo_reproducao(string tipo_reproducao);

    string getAlimento() const;
    void setAlimento(string alimento);

    string getAmeacadoDeEx() const;
    void setAmeacadoDeEx(string ameacadoDeEx);

    string getSilvestreOuExotico() const;
    void setSilvestreOuExotico(string silvestreOuExtico);

    string getVetResposavel() const;
    void setVetResponsavel(string vetResponsavel);

    string getTratadorResponsavel() const;
    void setTratadorResponsavel(string tratadorResponsavel);

    std::ostream &imprimirAnimal(std::ostream &os) const;
};

#endif