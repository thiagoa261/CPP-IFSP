#include <iostream>
#include <string>
using namespace std;

template <typename tipo1, typename tipo2>
    class Fila {
        private:
            string nome;
            tipo1 id;
            tipo2 lugar;

        public:
            Fila() {}
            Fila(string n, tipo1 id, tipo2 l) : nome(n), id(id), lugar(l) {}

            tipo1 getId() {
                return this->id;
            }

            tipo2 getLugar() {
                return this->lugar;
            }
    };

int main()
{
    Fila<int, int> Obj1("Nome1", 10, 66);
    cout << "Id: " << Obj1.getId() << endl;
    cout << "Lugar: " << Obj1.getLugar() << endl << endl;

    Fila<string, int> Obj2("Nome2", "5df78c5a7b1d8c1d4e766778", 2637);
    cout << "Id: " << Obj2.getId() << endl;
    cout << "Lugar: " << Obj2.getLugar() << endl << endl;

    Fila<int, string> Obj3("Nome3", 232, "sexto lugar");
    cout << "Id: " << Obj3.getId() << endl;
    cout << "Lugar: " << Obj3.getLugar() << endl << endl;

    return 0;
}
