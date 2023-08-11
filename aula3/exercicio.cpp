#include <iostream>
#include <string>
using namespace std;

int main()
{

    string frase;
    cout << "Digite uma palavra: ";
    cin >> frase;
   
    for(int i=0; i<frase.size(); i++) {
        cout << frase[i] << endl;
    }
   
    return 0;
}