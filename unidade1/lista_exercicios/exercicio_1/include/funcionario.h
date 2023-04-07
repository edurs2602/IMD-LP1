#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario {
  private:
    string nome;
    double salario;
    string departamento;

  public:
    Funcionario(string nome, double salario, string departamento);

    string getNome();
    double getSalario();
    string getDepartamento();
    void aumentaSalario(double perc);

};

#endif
