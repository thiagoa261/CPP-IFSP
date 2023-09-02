#include <iostream>
#include <string>
using namespace std;

class Livro {
    private:
        string titulo;
        string autor;
        int anoPubli;
        
    public:
        Livro(string titulo, string autor, int ano) {
            this->titulo = titulo;
            this->autor = autor;
            this->anoPubli = ano;
        }
        Livro() {
            this->titulo = "";
            this->autor = "";
            this->anoPubli = 0;
        }
        void ExibeLivro() {
            cout << "Livro: " << this->titulo << endl;
            cout << "Autor: " << this->autor << endl;
            cout << "Publicado: " << this->anoPubli << endl << endl;
        }
};

class Biblioteca {
    private:
        Livro *livros;
        int quantidadeLivros;
        
    public:
        Biblioteca() {
            livros = nullptr;
            quantidadeLivros = 0;
        }
        
        Biblioteca(Biblioteca &outraBiblioteca) {
            livros = outraBiblioteca.livros;
            quantidadeLivros = outraBiblioteca.quantidadeLivros;
        }
        
        void AddLivro(const Livro &l) {
            Livro *temp = new Livro[quantidadeLivros + 1];
        
            for(int i = 0; i < quantidadeLivros; i++) {
                temp[i] = livros[i];
            }
        
            temp[quantidadeLivros] = l;
        
            delete[] livros;
        
            livros = temp;
            quantidadeLivros++;
        }
        
        void ExibeAcervo() {
            cout << "Acervo da biblioteca" << endl;
            for(int i=0; i<quantidadeLivros; i++) {
                livros[i].ExibeLivro();
            }
        }
        
        ~Biblioteca() {
            delete[] livros;
        }
};

int main()
{
    Livro l1("Os Lusiadas", "Camoes", 1572);
    Livro l2("O Senhor das Moscas", "William Golding", 1954);
    Livro l3("Frankenstein", "Mary Shelley", 1818);
    
    Biblioteca b1;
    b1.AddLivro(l2);
    b1.AddLivro(l3);
    b1.AddLivro(l3);
    b1.AddLivro(l1);
    b1.ExibeAcervo();
    
    Biblioteca b2(b1);
    b2.ExibeAcervo();
    
    return 0;
}
