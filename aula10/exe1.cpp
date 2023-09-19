#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    protected:
        string nome;
        int idade;
    public:
        Pessoa(string n, int i) : nome(n), idade(i) {}
        void Exibe() {
            cout << "Nome: " << this->nome << endl;
            cout << "Idade: " << this->idade << endl << endl;
        }
};

int main()
{
    Pessoa p1("Bruno", 2);
    Pessoa p2("Maria", 45);
    Pessoa p3("Ana", 25);
   
    p1.Exibe();
    p2.Exibe();
    p3.Exibe();

    return 0;
}
