#include <iostream>
#include <vector>
#include <string>
#include "../include/funcionario.h"


using namespace std;

void funcionariosDepartamento(vector<Funcionario>& funcionarios, string departamento){
  for(auto funcionario : funcionarios){
    if (funcionario.getDepartamento() == departamento)
      cout << "Este funcionario: " << funcionario.getNome() << " pertence a este departamento " << funcionario.getDepartamento() << endl;
  }
}

void aumentarSalario(vector<Funcionario>& funcionarios, string departamento, double perc){
  for(auto funcionario : funcionarios){
    if (funcionario.getDepartamento() == departamento){
      cout << "O antigo salario era de: " << funcionario.getSalario() << endl;
      funcionario.aumentaSalario(perc);
      cout << "E agora vale: " << funcionario.getSalario() << endl;
    }
  }
}

int main(){

  vector<Funcionario> funcionarios;

  Funcionario func1("Joao", 3500.0, "RH");
  Funcionario func2("Eduardo", 15000.0, "CEO");
  Funcionario func3("Bruno", 2000.0, "Marketing");
  Funcionario func4("Rita", 3500.0, "RH");
  Funcionario func5("Gio", 2000.0, "Marketing");

  cout << "O CEO ganha: " << func2.getSalario() << endl;

  funcionarios.push_back(func1);
  funcionarios.push_back(func2);
  funcionarios.push_back(func3);
  funcionarios.push_back(func4);
  funcionarios.push_back(func5);

  cout << "Departamento de RH e seus funcionarios: " << endl;
  funcionariosDepartamento(funcionarios, "RH");

  cout << "Departamento de Marketing e seus funcionarios: " << endl;
  funcionariosDepartamento(funcionarios, "Marketing");

  cout << "Aumentar Salario do Marketing em 20%... " << endl;
  aumentarSalario(funcionarios, "Marketing", 20.0);


  return 0;
}
