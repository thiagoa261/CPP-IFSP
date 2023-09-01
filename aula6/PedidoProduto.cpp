#include <iostream>
#include <string>
using namespace std;

class Produto {
private:
  string nome;
  float preco;

public:
  Produto() {
    this->nome = "default";
    this->preco = 0.0;
  }
  Produto(string nome, float preco) {
    this->nome = nome;
    this->preco = preco;
  }

  string GetNome() { return this->nome; }
  float GetPreco() { return this->preco; }
};

class Pedido {
private:
  Produto* produtos;
  int quantidadeProdutos;

public:
  Pedido() {
    produtos = nullptr;
    quantidadeProdutos = 0;
  }

  // Acesso direto ao produto AddProd(Produto &produto)
  // Uma cópia do produto AddProd(Produto produto)

  void AddProd(Produto produto) {
    Produto* TempArray = new Produto[quantidadeProdutos + 1];

    for (int i = 0; i < quantidadeProdutos; i++) {
      TempArray[i] = produtos[i];
    }

    TempArray[quantidadeProdutos] = produto;

    delete[] produtos;

    produtos = TempArray;

    quantidadeProdutos++;
  }

  void ExibProdutosPedido() {
    for (int i = 0; i < quantidadeProdutos; i++) {
      cout << produtos[i].GetNome() << " " << produtos[i].GetPreco() << endl;
    }
  }

  float ValorPedido() {
    float soma = 0.0;
    for (int i = 0; i < quantidadeProdutos; i++) {
      soma += produtos[i].GetPreco();
    }
    return soma;
  }

  ~Pedido() {
    delete[] produtos;
  }
};


int main()
{
  Produto p1("Camiseta", 67.80);
  Produto p2("Calca", 45.99);

  Pedido p;
  p.AddProd(p1);
  p.AddProd(p1);
  p.AddProd(p2);

  p.ExibProdutosPedido();
  cout << "Valor do pedido: " << p.ValorPedido() << endl;

  return 0;
};
