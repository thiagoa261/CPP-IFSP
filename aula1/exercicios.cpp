#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    cout << "Digite seu nome: \n";
    getline(cin, nome);
    cout << "Olá, " << nome << "! Seja bem - vinda! \n\n";

    float cel;
    cout << "Digite a temperatura em Celsius: \n";
    cin >> cel;
    cout << cel << "graus Celsius equivalem a " << cel*1.8 + 32 << "graus Fahrenheit \n\n";

    float n1, n2, n3;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "\nDigite o segundo número: ";
    cin >> n2;
    cout << "\nDigite o terceiro número: ";
    cin >> n3;
    cout << "\nA média dos números é :" << (n1+n2+n3)/3;

    return 0;
};
