#include <iostream>
#include <string>
using namespace std;

class Veiculo {
    protected:
        string marca;
        int ano;
    public:
        Veiculo(string m, int a) : marca(m), ano(a) {}
};

class ModeloCarro : public Veiculo {
    private:
        string modelo;
    public:
        ModeloCarro(string m, int a, string model) : Veiculo(m, a), modelo(model) {}
       
        void Exibe() {
            cout << "Marca: " << this->marca << endl;
            cout << "Ano: " << this->ano << endl;
            cout << "Modelo: " << this->modelo << endl << endl;
        }
};

int main()
{
    ModeloCarro c1("Marca 1", 2009, "Modelo 1");
    ModeloCarro c2("Marca 2", 2018, "Modelo 2");
   
    c1.Exibe();
    c2.Exibe();

    return 0;
}