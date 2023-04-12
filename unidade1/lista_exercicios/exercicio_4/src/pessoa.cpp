#include "../include/pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa() : nome(""), idade(0), altura(0.0){}

Pessoa::Pessoa(string nome, int idade, double altura){
  this->nome = nome;
  this->idade = idade;
  this->altura = altura;
}

void Pessoa::setNome(string &nome){
  this->nome = nome;
}

void Pessoa::setIdade(int idade){
  this->idade = idade;
}

void Pessoa::setAltura(double altura){
  this->altura = altura;
}

string Pessoa::getNome() const {
  return nome;
}

int Pessoa::getIdade() const {
  return idade;
}

double Pessoa::getAltura() const {
  return altura;
}

void Pessoa::imprimirDados(){
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Altura: " << altura << endl;
}

bool Pessoa::operator>(const Pessoa& outra) const {
    return idade > outra.idade;
}

ostream& operator<<(ostream& os, const Pessoa& pessoa) {
    os << "Nome: " << pessoa.getNome() << endl;
    os << "Idade: " << pessoa.getIdade() << endl;
    os << "Altura: " << pessoa.getAltura() << endl;
    return os;
}

