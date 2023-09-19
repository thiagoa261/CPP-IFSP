#include <iostream>
#include <string>
using namespace std;

class Veiculo {
protected:
  string modelo;
  int ano;
  float preco;
public:
  virtual void ImprimirInfo() {
    cout << "\nInfo Veiculo \n";
    cout << "Modelo: " << this->modelo << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Ano: " << this->ano << endl;
  }
};

class Carro : public Veiculo {
public:
  Carro(string modelo, int ano, float preco) {
    this->modelo = modelo;
    this->preco = preco;
    this->ano = ano;
  }
  void ImprimirInfo() override {
    cout << "\nInfo Carro \n";
    cout << "Modelo: " << this->modelo << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Ano: " << this->ano << endl;
  }
};

class Moto : public Veiculo {
public:
  Moto(string modelo, int ano, float preco) {
    this->modelo = modelo;
    this->preco = preco;
    this->ano = ano;
  }
  void ImprimirInfo() override {
    cout << "\nInfo Moto \n";
    cout << "Modelo: " << this->modelo << endl;
    cout << "Preco: " << this->preco << endl;
    cout << "Ano: " << this->ano << endl;
  }
};

int main()
{
  Carro c("Sedan", 2022, 45000);
  Moto m("Yamaha", 2021, 8000);

  c.ImprimirInfo();

  m.ImprimirInfo();

  c.Veiculo::ImprimirInfo();

  return 0;
}
