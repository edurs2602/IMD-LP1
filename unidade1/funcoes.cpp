#include <iostream>

using namespace std;

int soma(int x, int y) {
  int result = x + y;

  return result;
}

int mul(int x, int y) {
  int result = x * y;

  return result;
}

int divisao(int x, int y) {
  int result = x / y;

  return result;
}

int subtracao(int x, int y) {
  int result = x - y;

  return result;
}

int escolha(int x) {
  int valor1, valor2;
  int multiplicar, somar, subtrair, dividir;

  std::cout << "Digite o primeiro valor: \n";
  std::cin >> valor1;

  std::cout << "Digite o segundo valor: \n";
  std::cin >> valor2;

  if (x == 1) {
    multiplicar = mul(valor1, valor2);

    std::cout << "O valor da multiplicação é: \n" << multiplicar << std::endl;
  }

  if (x == 2) {
    somar = soma(valor1, valor2);

    std::cout << "O valor da soma é: \n" << somar << std::endl;
  }

  if (x == 3) {
    dividir = divisao(valor1, valor2);

    std::cout << "O valor da divisao é: \n" << dividir << std::endl;
  }

  if (x == 4) {
    subtrair = subtracao(valor1, valor2);

    std::cout << "O valor da subtracao é: \n" << subtrair << std::endl;
  }

  return 0;
}

int main() {
  int escolhas;

  std::cout << "Escolha uma das opções: \n";
  std::cout << "1 - Multiplicação \n";
  std::cout << "2 - Soma \n";
  std::cout << "3 - Divisão \n";
  std::cout << "4 - Subtração \n";
  std::cout << "0 - Fechar programa \n";

  std::cin >> escolhas;

  if (escolhas == 0) {
    std::cout << "A operação foi Terminada\n";

    return 0;
  }

  std::cout << "A operação foi escolhida!\n";

  escolha(escolhas);

  return main();
}
