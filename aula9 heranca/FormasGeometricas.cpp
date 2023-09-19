#include <iostream>
#include <string>
using namespace std;
float pi = 3.14;

class FormaGeometrica {
  public:
    virtual void calcularArea() = 0;
    virtual void calcularPerimetro() = 0;
};

class Quadrado : public FormaGeometrica {
  private:
    double lado;
  public:
    Quadrado(double lado) {
      this->lado = lado;
    }
    void calcularArea() override {
      cout << "Area do quadrado: " << lado * lado << endl;
    }
    void calcularPerimetro() override {
      cout << "Perimetro do quadrado: " << 4 * lado << endl;
    }
};

class Circulo : public FormaGeometrica {
  private:
    double r;
  public:
    Circulo(double raio) {
      this->r = raio;
    }
    void calcularArea() override {
      cout << "Area do circulo: " << pi * (r*r) << endl;
    }
    void calcularPerimetro() override {
      cout << "Perimetro do circulo: " << 2 * pi * r << endl;
    }
};

int main()
{
  Quadrado q1(5);

  Circulo c1(8);
  Circulo c2(10.6);

  q1.calcularArea();
  q1.calcularPerimetro();
  cout << endl;

  c1.calcularArea();
  c1.calcularPerimetro();
  cout << endl;

  c2.calcularArea();
  c2.calcularPerimetro();
  cout << endl;

  return 0;
}
