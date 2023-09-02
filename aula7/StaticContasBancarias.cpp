#include <iostream>
#include <string>
using namespace std;

class ContaBancaria {
    private:
        static float saltoTotal;
        static int quantidadeContas;
    
        int id;
        float saldo;
    
    public:
        ContaBancaria(int id) {
            this->id = id;
            this->saldo = 0.0;
            
            quantidadeContas++;
        }
        
        ContaBancaria(int id, float saldo) {
            this->id = id;
            this->saldo = saldo;
            
            saltoTotal += saldo;
            quantidadeContas++;
        }
        
        ~ContaBancaria() {
            saltoTotal -= this->saldo;
            quantidadeContas--;
        }
        
        void Depositar(float valor) {
            this->saldo += valor;
            saltoTotal += valor;
        }
        
        void Sacar(float valor) {
            this->saldo -= valor;
            saltoTotal -= valor;
        }
        
        static float Total() { return saltoTotal; }
        static int quantContas() { return quantidadeContas; }
};

float ContaBancaria::saltoTotal = 0.0;
int ContaBancaria::quantidadeContas = 0;

int main()
{
    ContaBancaria c1(1, 100);
    ContaBancaria c2(2, 500);
    ContaBancaria c3(3, 50.50);
    ContaBancaria c4(4, 200);

    cout << "Contas abertas: " << ContaBancaria::quantContas() << endl;
    cout << "Saldo total: " << ContaBancaria::Total() << endl;
    
    c1.Depositar(100.50);
    c2.Sacar(20);
    
    cout << "\nContas abertas: " << ContaBancaria::quantContas() << endl;
    cout << "Saldo total: " << ContaBancaria::Total() << endl;
    
    c3.~ContaBancaria();
    
    cout << "\nContas abertas: " << ContaBancaria::quantContas() << endl;
    cout << "Saldo total: " << ContaBancaria::Total() << endl;

    return 0;
}
