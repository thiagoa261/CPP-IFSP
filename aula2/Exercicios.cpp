#include "iostream"

int main()
{
  // Exercicio 1
  int num;
  std::cout << "Digite um numero: ";
  std::cin >> num;

  if (num % 2 == 0) {
    std::cout << "O numero e par\n";
  }
  else {
    std::cout << "O numero e impar\n";
  }

  // Exercicio 2
  int num2;
  std::cout << "\nDigite outro numero: ";
  std::cin >> num2;

  if (num2 > 0) {
    std::cout << "O numero e positivo";
  }
  else if (num2 < 0) {
    std::cout << "O numero e negativo";
  }
  else {
    std::cout << "O numero e zero";
  }

  // Exercicio 3
  int x1, x2, x3;
  std::cout << "\n\n\nDigite um numero: ";
  std::cin >> x1;
  std::cout << "\nDigite outro numero: ";
  std::cin >> x2;
  std::cout << "\nDigite outro numero: ";
  std::cin >> x3;

  if (x1 < x3 && x3 < x2) {
    std::cout << "\nO numero " << x3 << " esta etre " << x1 << " e " << x2;
  }

  int x;
  std::cin >> x;
  return 0;
}

