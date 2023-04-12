#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa{
  private:
    string nome;
    int idade;
    double altura;

  public:
    Pessoa();
    Pessoa(string nome, int idade, double altura);
    
    void setNome(string& nome);
    void setIdade(int idade);
    void setAltura(double altura);

    string getNome() const;
    int getIdade() const;
    double getAltura() const;

    void imprimirDados();
    bool operator>(const Pessoa& outra) const;

};

ostream& operator<<(ostream& os, const Pessoa& pessoa);

#endif
