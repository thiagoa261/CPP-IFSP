#include <iostream>
#include <string>
using namespace std;

class Produto {
  protected:
    string nome;
    double preco;
    int quant;
  public:
    virtual double calcularTotal() {
      return preco * quant;
    }
};

class ItemVenda : public Produto {
  public:
    ItemVenda(string nome, double preco, int quant) {
      this->nome = nome;
      this->preco = preco;
      this->quant = quant;
    }
};

class ItemDesconto : public Produto {
  private: 
    double desconto; // em %
  public:
    ItemDesconto(string nome, double preco, int quant, double desconto) {
      this->nome = nome;
      this->preco = preco;
      this->quant = quant;
      this->desconto = desconto;
    }
    double calcularTotal() override {
      return (preco * quant) - ((preco * quant) * desconto / 100);
    }
};

int main()
{
  ItemVenda p1("Cafe", 11.89, 3);
  ItemVenda p2("Coca", 7.79, 4);
 
  ItemDesconto p3("Leite", 6.25, 4, 8);
  ItemDesconto p4("Queijo", 25.39, 1, 30);

  Produto *produtos[4];

  produtos[0] = &p1;
  produtos[1] = &p2;
  produtos[2] = &p3;
  produtos[3] = &p4;

  double soma = 0;
  for (int i=0; i<4; i++) {
    soma += produtos[i]->calcularTotal();
  }

  cout << "Valor total da compra: " << soma << endl;

  return 0;
}
