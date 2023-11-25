#include <iostream>
using namespace std;

class Ponto2D {
private:
    double X, Y;

public:
    Ponto2D() {}
    Ponto2D(double x, double y) : X(x), Y(y) {}

    Ponto2D operator+(const Ponto2D& outro) {
        return Ponto2D(X + outro.X, Y + outro.Y);
    }

    Ponto2D operator-(const Ponto2D& outro) {
        return Ponto2D(X - outro.X, Y - outro.Y);
    }

    bool operator==(const Ponto2D& outro) {
        if (X == outro.X and Y == outro.Y) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator!=(const Ponto2D& outro) {
        if (X != outro.X and Y != outro.Y) {
            return true;
        }
        else {
            return false;
        }
    }

    Ponto2D operator=(const Ponto2D& outro) {
        return Ponto2D(X = outro.X, Y = outro.Y);
    }

    void ExibirCoordenadas() {cout << "Coordenadas: (" << X << ", " << Y << ")" << endl;}
};


int main() {
    Ponto2D pontoA(7.0, 3.0);
    Ponto2D pontoB(1.0, 5.0);
    Ponto2D pontoC(1.0, 5.0);

    Ponto2D somaAeB = pontoA + pontoB;
    somaAeB.ExibirCoordenadas();

    Ponto2D subAeB = pontoA - pontoB;
    subAeB.ExibirCoordenadas();

    if (pontoA == pontoB) {
        cout << "Errado!" << endl;
    }
    if (pontoB == pontoC) {
        cout << "Iguais!" << endl;
    }

    if (pontoA != pontoB) {
        cout << "Diferentes!" << endl;
    }
    if (pontoB != pontoC) {
        cout << "Errado!" << endl;
    }

    Ponto2D pontoD(15.0, 2.0);
    Ponto2D pontoE = pontoD;
    pontoE.ExibirCoordenadas();

    return 0;
}
