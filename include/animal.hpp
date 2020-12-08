#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
using std::string;

enum tpAnimal
{
	anfibioExotico,
	anfibioNativo,
    anfibioDomestico,
	mamiferoExotico,
	mamiferoNativo,
    mamiferoDomestico,
    aveExotico,
    aveNativo,
    aveDomestico,
    reptilExotico,
    reptilNativo,
    reptilDomestico
};

class Animal
{
protected:
    size_t id;
    string nome;
    string sexo;
    int idade;
    float peso;
    float comprimento;
    string habitat;
    int patas;
    string especie;
    string tipo_pele;
    string tipo_reproducao;
    string alimento;
    bool ameacadoDeEx;
    string vetResponsavel;
    string tratadorResponsavel;
    tpAnimal tipo;

public:
    Animal(size_t id,string nome, string sexo, int idade, float peso, float comprimento,
           string habitat, int patas, string especie, string tipo_pele,
           string tipo_reproducao, string alimento, bool ameacadoDeEx,
           string vetResponsavel, string tratadorResponsavel, tpAnimal tipo);

    virtual ~Animal();

    size_t getId() const;
    void setId(size_t id);

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

    string getHabitat() const;
    void setHabitat(string habitat);

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

    bool getAmeacadoDeEx() const;
    void setAmeacadoDeEx(bool ameacadoDeEx);

    string getVetResposavel() const;
    void setVetResponsavel(string vetResponsavel);

    string getTratadorResponsavel() const;
    void setTratadorResponsavel(string tratadorResponsavel);

    tpAnimal getTpAnimal() const;
    void setTpAnimal(tpAnimal tipo);

    friend std::ostream& operator<< (std::ostream& o, Animal const &func);
    
    virtual std::ostream& imprimeDados(std::ostream& o) const;
};

#endif