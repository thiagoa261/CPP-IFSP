#include <iostream>
using namespace std;

class Conta {
private:
  float saldo;

public:
  Conta() {
    saldo = 0;
  }
  float VerificaSaldo() {
    return saldo;
  }
  void Deposita(float valor) {
    saldo += valor;
  }
  void Depositar(float saldo) {
    this->saldo += saldo;
  }
};

int main()
{
  Conta c;

  c.Deposita(20.70);

  c.Depositar(10);

  cout << c.VerificaSaldo() << "\n\n\n";

  return 0;
}
