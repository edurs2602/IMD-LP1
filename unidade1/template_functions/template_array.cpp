#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>

T gettingMaxValue(T array[]) {
  auto value = max({array});

  return value;
}

int main() {
  int arrayint[] = {1, 2, 3, 4, 5};
  char arraychar[] = {'a', 'b', 'c', 'd', 'e'};

  int maxValue = gettingMaxValue(arrayint);

  cout << "O valor máximo do elemento do array é: " << maxValue << endl;

  return 0;
}
