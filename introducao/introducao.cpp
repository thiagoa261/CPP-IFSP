#include <iostream>

int a(int x) {
    return 100 + x;
};

int main() {
    std::cout << "numero:\t" << 22 << "\n";
    std::cout << "teste\t" << std::endl;
    std::cout << "quebrado: " << (float) 5/10 << std::endl;
    std::cout << "Nome" << std::endl;
    std::cout << "Boa \nNoite \n";

    std::cout << a(400) << std::endl; 

    int a = 1500;
    if (a < 200) {
        std::cout << "Primeiro \n";
    }
    else {
        std::cout << "Segundo \n";
    }

    int b = 0;
    while(b < 5) {
        std::cout << "a" << std::endl;
        b++;
    } 

    for(int i=0; i<3; i++) {
        std::cout << i << std::endl;
    }

    bool i = true;
    if(i == true) {
        std::cout << "Resultado: " << i << std::endl;
    } 
    else {
        std::cout << "Resultado: " << i << std::endl;
    }

    int var;
    std::cout << "Digite um numero: " << std::endl;;
    std::cin >> var;
    std::cout << var + 6 / 2 << std::endl;;

    return 0;
};
