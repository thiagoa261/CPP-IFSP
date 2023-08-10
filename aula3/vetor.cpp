#include <iostream>
using namespace std;

int main()
{
    int vetor[10];
    int number, soma;

    for(int i=0; i<10; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
        soma = soma + vetor[i];
    }
    
    cout << "\nSoma: " << soma;

    int maior = vetor[0]; 
    int menor = vetor[0];
    for(int i=0; i<10; i++) {
        if(vetor[i] >= maior)  {
            maior = vetor[i];
        }
        if(vetor[i] <= menor)  {
            menor = vetor[i];
        }
    }
    cout << "\nMaior valor digitado: " << maior;
    cout << "\nMenor valor digitado: " << menor;

    return 0;
}
