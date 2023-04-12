#include <vector>
#include <string>
#include "../include/livro.h"

using namespace std;

Livro::Livro(string titulo, string autor, vector<double> notas){
  this->titulo = titulo;
  this->autor = autor;
  this->notas = notas;
}

string Livro::getTitulo(){
  return this->titulo;
}

string Livro::getAutor(){
  return this->autor;
}

vector<double> Livro::getNotas(){
  return this->notas;
}

double Livro::mediaNotas(){
  double quantidade = 0;
  int len = notas.size();

  for (int i = 0; i < len; i++) {
    quantidade += notas[i];
  };

  double final = quantidade / len;

  return final; 
}

