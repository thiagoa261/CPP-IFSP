#include <iostream>
#include <cmath>
using namespace std;

class Calculadora {
    public:
        static double Potenciacao(float x, float y) {
            return pow(x, y);
        }
};

int main()
{
    cout << Calculadora::Potenciacao(5, 3) << endl;

    return 0;
}
