#include <iostream>
using namespace std;

/*
namespace primeiro {
    void UmaFuncao() {
        cout << "Primeiro" << endl;
    };

    namespace segundo {
        void OutraFuncao() {
            return UmaFuncao();
        };
    }
}
*/

/*
namespace primeiro {
    namespace segundo {
        void OutraFuncao() {
            cout << "Segundo" << endl;
        };
    }

    void UmaFuncao() {
        return segundo::OutraFuncao();
    };
}
*/

namespace primeiro {
    inline namespace segundo {
        void OutraFuncao() {
            cout << "Segundo" << endl;
        };
    }

    void UmaFuncao() {
        return OutraFuncao();
    };
}

int main()
{
    //primeiro::segundo::OutraFuncao();

    primeiro::UmaFuncao();

    return 0;
}
