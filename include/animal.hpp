#pragma once

#include <iostream>
using std::string;

class Animal
{
protected:
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

public:
    Animal(size_t id, string nome, string sexo, int idade, float peso, float comprimento,
           int patas, string especie, string tipo_pele,
           string alimento, string silvestreOuExotico, string vetResponsavel,
           string tratadorResponsavel);
    virtual ~Animal();

    void setId(size_t id);
    size_t getId();

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

    int getPatas() const;
    void setPatas(int patas);

    string getEspecie() const;
    void setEspecie(string especie);

    string getTipo_pele() const;
    void setTipo_pele(string tipo_pele);

    string getAlimento() const;
    void setAlimento(string alimento);

    string getSilvestreOuExotico() const;
    void setSilvestreOuExotico(string silvestreOuExtico);

    string getVetResposavel() const;
    void setVetResponsavel(string vetResponsavel);

    string getTratadorResponsavel() const;
    void setTratadorResponsavel(string tratadorResponsavel);

    std::ostream &imprimirAnimal(std::ostream &os) const;
};
