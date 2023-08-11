#include <iostream>
using namespace std;

int main()
{
    int v = 10;
    int *p = &v;
    cout << "Valor de var: " << v;
    cout << "\nEndereço de memória da variavel: " << &v;
    cout << "\nValor que o ponteiro aponta: " << *p;
    cout << "\nEndereço de memória do ponteiro: " << p;
   
    *p = 100;
    cout << "\n\nNovo valor da variavel: " << v << endl;
   
    int vet[10];
    cout << vet << endl;
    cout << &vet[0] << endl;
    cout << &vet[5] << endl;
   

    return 0;
}