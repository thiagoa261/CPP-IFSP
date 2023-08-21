#include <iostream>
using namespace std;
int numeroChamadas = 0;

void quantChamada() {
    numeroChamadas++;
}

int soma(int n1, int n2) {
    return n1 + n2;
}

int fatorial(int n) {
    for(int i=n-1; i>0; i--) {
        n = n * i;
    }
    return n;
}

int vetorMenor(int *vetor, int tamanho) {
    int menor = vetor[0];
    for(int i=0; i < tamanho; i++) {
        if(vetor[i] <= menor) {
            menor = vetor[1];
        }
    }
    return menor;
}

void elevar(int *ponteiro) {
    *ponteiro = (*ponteiro) * (*ponteiro);
}

int elevarVetor(int *vetor, int tamanho) {
    for(int i=0; i < tamanho; i++) {
        elevar(&vetor[i]);
        // std::cout << vetor[i] << std::endl;
    }
    return 0;
}

int duplicarMatriz(int *matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i * colunas + j] = matriz[i * colunas + j] * 2;
            // std::cout << matriz[i * colunas + j] << " ";
        }
        // std::cout << std::endl;
    }
    return 0;
}

int main()
{
    int vet[3] = {10, 2, 5};

    int mat[2][2] = {1, 2, 3, 4};

    duplicarMatriz(&mat[0][0], 2, 2);
   
    return 0;
}