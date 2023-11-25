#include <iostream>
using namespace std;

template <typename tipo>
    tipo maior(tipo vetor[], int t) {
        tipo maior = vetor[0];

        for (int i=0; i<t; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
        }

        return maior;
    };

int main()
{
    int vetor1[] = {0, 22, 89, 20, 37, 33};

    float vetor2[] = {1.7, 23, 30.99, 4.9, 0.8};

    char vetor3[] = {'a', 'b', 'c'};

    cout << maior(vetor1, 6) << endl;
    cout << maior(vetor2, 5) << endl;
    cout << maior(vetor3, 3) << endl;

    return 0;
}
