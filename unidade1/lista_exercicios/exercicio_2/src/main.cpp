#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../include/animal.h"

using namespace std;

class Zoo{
  private:
    vector<Animal> animais;
    
  public:
    void addVector(Animal animal){
      animais.push_back(animal);
    }

    void especieDados(string especie){
      cout << "Estes são os dados encontrados da especie: " << especie << endl;
      for (auto animal : animais){
        if (animal.getEspecie() == especie){
          cout << "Nome: " << animal.getNome() << endl;
          cout << "Idade: " << animal.getIdade() << endl;
        }
      } 
    }

    void removerAnimal(int idade){
      cout << "Serão removido os animais com idade superior a: " << idade << endl;
	    animais.erase(
        remove_if(
          animais.begin(),
          animais.end(),
            [idade](Animal animal) { return animal.getIdade() > idade; }
          ),
        animais.end()
        );
    }

};

int main(){

  Zoo zoo;
  zoo.addVector(Animal("Jeremias", "Leopardo", 6));
  zoo.addVector(Animal("José", "Elefante", 8));
  zoo.addVector(Animal("Jacaré", "Cachorro", 13));
  zoo.addVector(Animal("Esquelo", "Elefante", 15));
  zoo.addVector(Animal("Pneu", "Cachorro", 9));
  zoo.addVector(Animal("Lucio", "Cachorro", 17));

  zoo.especieDados("Cachorro");
  zoo.especieDados("Elefante");

  zoo.removerAnimal(10);

  zoo.especieDados("Cachorro");

  return 0;
}
