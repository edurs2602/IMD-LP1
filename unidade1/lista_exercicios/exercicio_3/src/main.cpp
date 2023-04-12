#include <iostream>
#include <string>
#include <vector>
#include "../include/livro.h"


using namespace std;

double mediaGeral(vector<Livro> livros){

  double notas = 0;
  
  for (auto nota : livros){
    notas += nota.mediaNotas();
  }
  
  return notas / livros.size();
}

int main(){
  vector<Livro> livros;

  vector<double> notasl1 = {9.0, 8.0, 5.0, 4.8};
  Livro l1("Harry Potter", "JK Rollling", notasl1);
  livros.push_back(l1);

  vector<double> notasl2 = {10.0, 5.0, 7.0, 4.0};
  Livro l2("Percy Jackson", "Alguem ai", notasl2);
  livros.push_back(l2);

  vector<double> notasl3 = {1.0, 5.0, 7.0, 9.0};
  Livro l3("Senhor dos aneis", "Tolkien", notasl3);
  livros.push_back(l3);

  cout << mediaGeral(livros) << endl;

  return 0;
}
