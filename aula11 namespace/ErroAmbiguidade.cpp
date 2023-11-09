#include <iostream>
using namespace std;

namespace {
    int x = 10;

    void Hello() {
        cout << "namespace Hello!" << endl;
    }
}

void Hello() {
    cout << "Hello!" << endl;
}

int main()
{
    cout << x << endl;

    Hello();

    return 0;
}
