#include <iostream>
#include <string>
using namespace std;

class Concatenador {
    private:
        string frase = "";

    public:
        template <typename t>
            void Concatenar(t ultimo) {
                this->frase += ultimo;

                cout << this->frase << endl;
            }

        template <typename t, typename... ts>
            void Concatenar(t primeiro, ts... outros) {
                this->frase += primeiro;

                Concatenar(outros...);
            }
};

int main()
{
    Concatenador c;

    c.Concatenar("Ola, ", "bom ", "dia!");

    return 0;
}
