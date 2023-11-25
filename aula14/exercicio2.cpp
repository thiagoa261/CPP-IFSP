#include <iostream>
#include <string>
using namespace std;

template <typename... tipos>
    int NumeroArgumentos(tipos... args) {
        return sizeof...(args);
    }

int main()
{
    cout << NumeroArgumentos(1,2,3) << endl;

    cout << NumeroArgumentos(1.8,2,'B',0.77) << endl;

    cout << NumeroArgumentos(1,2,3,"string","teste",6.88) << endl;

    return 0;
}
