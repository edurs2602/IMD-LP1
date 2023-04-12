#include "../include/pessoa.h"
#include <iostream>

using namespace std;

template <typename T>
void imprimirMaior(T x, T y){
  cout << "Entre os valores, este é o maior: ";

  if (x > y){
    cout << x << endl;
  } else {
    cout << y << endl;
  }
}

int main(){

  Pessoa p1("Joao", 30, 1.8);
  Pessoa p2("Maria", 25, 1.6);
  Pessoa p3("Pedro", 17, 1.75);
  Pessoa p4("Marcos", 22, 1.9);
  Pessoa p5("Julia", 27, 1.7);

  p1.imprimirDados();
  p2.imprimirDados();
  p3.imprimirDados();
  p4.imprimirDados();
  p5.imprimirDados();

  imprimirMaior(10, 20);
  imprimirMaior("ola", "mundo");
  imprimirMaior(p1, p2);

  return 0;
}
