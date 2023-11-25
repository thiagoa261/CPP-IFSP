#include <iostream>
using namespace std;

template <typename tipo>
    void troca(tipo &a, tipo &b) {
        tipo temp = a;

        a = b;
        b = temp;

        cout << a << " - " << b << endl;
    }

int main()
{
    int n1 = 1, n2 = 5;

    double n3 = 2, n4 = 5.95;

    char n5 = '0', n6 = '9';

    troca(n1, n2);

    troca(n3, n4);

    troca(n5, n6);

    return 0;
}
