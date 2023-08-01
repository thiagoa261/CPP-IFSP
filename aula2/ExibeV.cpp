#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Digite um numero: ";
  cin >> num;

  for (int i = num; i >= 1; i--) {
    // Espaços à esquerda
    for (int j = 0; j < num - i; j++) {
      cout << " ";
    }
    // Caractere decrescente
    cout << i;
    // Espaços entre os caracteres
    for (int k = 1; k < 2 * (i - 1); k++) {
      cout << " ";
    }
    // Caractere crescente
    if (i != 1) {
      cout << i;
    }
    cout << endl;
   }

  int x;
  cin >> x;
  return 0;
}
