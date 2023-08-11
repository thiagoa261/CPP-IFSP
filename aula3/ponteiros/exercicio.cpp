#include <iostream>
using namespace std;

int main()
{
    int nota = 0, *notas = new int[0], tamanho = 0;
    
    while(nota >= 0) {
        cout << "Digite uma nota: ";
        cin >> nota;
        
        if(nota < 0) {
            break;
        }
        
        int *tempVetor = new int[tamanho + 1];
        
        for (int i = 0; i < tamanho; i++) {
            tempVetor[i] = notas[i];
        }
        
        tempVetor[tamanho] = nota;
        
        delete[] notas;
        
        notas = tempVetor;
        
        tamanho++;
    }
    
    if(tamanho > 0) {
        int soma = 0;
        for (int i = 0; i < tamanho; i++) {
            soma += notas[i];
        }
        cout << "\nMedia: " << soma/tamanho << endl;
        
        cout << "\nNotas inseridas: ";
        for (int i = 0; i < tamanho; i++) {
            cout << notas[i] << " ";
        }
    }
    else {
        cout << "\nImpossível calcular média de um vetor vazio" << endl;
    }
    
    delete[] notas;
    return 0;
}