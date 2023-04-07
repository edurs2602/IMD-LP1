#include <string>
#include "../include/funcionario.h"

using namespace std;

Funcionario::Funcionario(string nome, double salario, string departamento) {
  this->nome = nome;
  this-> salario = salario;
  this-> departamento = departamento;
}

string Funcionario::getNome() {
  return this->nome;
}

double Funcionario::getSalario() {
  return this->salario;
}

string Funcionario::getDepartamento() {
  return this->departamento;
}

void Funcionario::aumentaSalario(double perc) {
  double porcentagem = (perc/100) + 1;
  this->salario *= porcentagem;
}
