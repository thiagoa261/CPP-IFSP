#include <iostream>

int main()
{
  float a, b;
  std::cout << "Digite uma medida em metros: ";
  std::cin >> a;

  b = a;
  a = a * 100;
  int c = static_cast<int>(a);

  std::cout << "\n" << b << " metros equivalem a " << c << " centimetros.";

  int x;
  std::cin >> x;
  return 0;
}
