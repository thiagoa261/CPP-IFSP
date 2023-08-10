#include <iostream>
using namespace std;

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0, quantN = 0, impar = 0;
    
    for(int i=0; i<10; i++) {
        if(vetor[i] % 2 > 0) {
            impar++;
        }
    }
    
    if(impar == 0) {
        cout << "Vetor sem valores ímpares!";
        return 0;
    }
    
    for(int i=0; i<10; i++) {
        if(vetor[i] % 2 > 0) {
            soma = soma + vetor[i];
            quantN++;
        }
    }
    cout << "Média dos valores ímpares: " << soma/quantN;

    return 0;
}
