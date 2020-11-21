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

    string getNome();
    void setNome(string nome);

    string getSexo();
    void setSexo(string sexo);

    int getIdade();
    void setIdade(int idade);

    float getPeso();
    void setPeso(float peso);

    float getComprimento();
    void setComprimento(float comprimento);

    string getAmbiente();
    void setAmbiente(string ambiente);

    int getPatas();
    void setPatas(int patas);

    string getEspecie();
    void setEspecie(string especie);

    string getTipo_pele();
    void setTipo_pele(string tipo_pele);

    string getTipo_reproducao();
    void setTipo_reproducao(string tipo_reproducao);

    string getAlimento();
    void setAlimento(string alimento);

    string getAmeacadoDeEx();
    void setAmeacadoDeEx(string ameacadoDeEx);

    string getSilvestreOuExotico();
    void setSilvestreOuExotico(string silvestreOuExtico);

    string getVetResposavel();
    void setVetResponsavel(string vetResponsavel);

    string getTratadorResponsavel();
    void setTratadorResponsavel(string tratadorResponsavel);

    std::ostream& imprimirAnimal(std::ostream& os) const;
};

#endif