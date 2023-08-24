#include <iostream>
#include <string>
using namespace std;

class Livro {
    private:
        string titulo;
        string autor;
        int anoPubli;

    public:
        Livro() {
            titulo = "Default Titulo";
            autor = "Default Autor";
            anoPubli = 0;
        }
        void ExibTitulo() {
            cout << this->titulo << std::endl;
        }
        void ExibAutor() {
            cout << this->autor << std::endl;
        }
        void ExibAno() {
            cout << this->anoPubli << std::endl;
        }
};

class Cubo {
  private:
    float comprimento;
    float largura;
    float altura;

  public:
    Cubo() {
        comprimento = 7.0;
        largura = 4.7;
        altura = 3.0;
    }
    void ExibeCubo() {
        cout << "comprimento: " << comprimento << endl;
        cout << "largura: " << largura << endl;
        cout << "altura: " << altura << endl;
    }
    float VolumeCubo() {
        return altura*largura*comprimento;
    }
};

class Carro {
  private:
    string marca;
    string modelo;
    int ano;

  public:
    Carro() {
      marca = "Volkswagen";
      modelo = "Fox";
      ano = 2003;
    }
    void ExibeCarro() {
      cout << this->marca << endl;
      cout << this->modelo << endl;
      cout << this->ano << endl;
    }
};

class JogoAdivinhacao {
  private:
    int n;
  
  public:
    JogoAdivinhacao() {
      srand(time(0));             // inicializar a semente
      this->n = (rand() % 101);  // gerar n entre o 0 e 100

      // cout << this->n << endl;
    }

    bool VerificaAcerto(int num) {
      if (num == this->n) {
        return true;
      }
      else {
        if (num > this->n) {
          cout << "\nO valor e menor" << endl;
        }
        else {
          cout << "\nO valor e maior" << endl;
        }

        return false;
      }
    }

    bool GameStart() {
      int number;
      cout << "\nDigite um numero: ";
      cin >> number;

      if (VerificaAcerto(number) == true) {
          cout << "Correto! " << number << " = " << this->n << " Voce ganhou!\n";
          return true;
      }
      else
      {
         GameStart();
      }
    }
};

int main()
{
  /*
  Livro l;
  l.ExibTitulo();
  l.ExibAutor();
  l.ExibAno();
  
  Cubo c;
  c.ExibeCubo();
  cout << "Volume: " << c.VolumeCubo() << endl;
 
  Carro car;
  car.ExibeCarro();
  */

  JogoAdivinhacao game;
  game.GameStart();
  
  return 0;
}
