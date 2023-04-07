#include "../include/animal.h"
#include <string>

using namespace std;

Animal::Animal(string nome, string especie, int idade){
  this->nome = nome;
  this->especie = especie;
  this->idade = idade;
}

string Animal::getNome(){
  return this->nome;
}

string Animal::getEspecie(){
  return this->especie;
}

int Animal::getIdade(){
  return this->idade;
}
