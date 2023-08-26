#include <iostream>
using namespace std;

class VetorDinamico {
  private:
    int tamanho;
    int *vetor;

  public:
    VetorDinamico() {
      vetor = new int [0];
      tamanho = 0;
    }

    void Add(int num) {
      int *tempVetor = new int[tamanho+1];

      for(int i=0; i<tamanho; i++) {
        tempVetor[i] = vetor[i];
      }

      tempVetor[tamanho] = num;

      delete[] vetor;

      vetor = tempVetor;

      tamanho++;
    }

    void ExibeVetor() {
      cout << "Vetor: ";
      for(int i=0; i<tamanho; i++) {
        cout << vetor[i] << " ";
      }
    }

    ~VetorDinamico() {
      delete[] vetor;
    }
};

int main()
{
  VetorDinamico v;

  v.Add(57);
  v.Add(2);
  v.Add(32);
  v.Add(4562);
  v.Add(88);
  v.Add(3);
  v.Add(100);

  v.ExibeVetor();
}

