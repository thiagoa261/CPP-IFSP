#include <iostream>
using namespace std;

namespace primeiro {
    void Exibe() {
        cout << "Primeiro" << endl;
    };

    void Exibe2() {
        cout << "Primeiro 2" << endl;
    };

    namespace segundo {
        void Exibe() {
            cout << "Segundo" << endl;
        };
    }
}

int main()
{
    primeiro::Exibe();
    primeiro::segundo::Exibe();
    cout << "\n";

    namespace p = primeiro;
    p::Exibe();
    cout << "\n";

    // using primeiro::Exibe;
    // Exibe();
    // Exibe2(); // erro

    using namespace primeiro; // usa o namespace todo
    Exibe();
    Exibe2();

    return 0;
}
