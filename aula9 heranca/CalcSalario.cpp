#include <iostream>
#include <string>
using namespace std;

class Funcionario {
  protected:
    string nome;
    int id;
    double salario;
  public:
    virtual double CalcularSalario() {
      return salario;
    }
};

class Gerente : public Funcionario {
  private:
    int bonusGerente = 20;
  public:
    Gerente(string nome, int id, double salario) {
      this->id = id;
      this->nome = nome;
      this->salario = salario;
    }
    double CalcularSalario() override {
      return salario + (salario * bonusGerente / 100);
    }
};

class Programador : public Funcionario {
  private:
    int bonusProgramador = 11;
  public:
    Programador(string nome, int id, double salario) {
      this->id = id;
      this->nome = nome;
      this->salario = salario;
    }
    double CalcularSalario() override {
      return salario + (salario * bonusProgramador / 100);
    }
};

int main()
{
  Programador p1("Marcio", 1, 5000.33);
  Gerente g1("Miguel", 2, 10000);

  cout << "Salario p1: " << p1.CalcularSalario() << endl;
  cout << "Salario g1: " << g1.CalcularSalario() << endl;

  return 0;
}
