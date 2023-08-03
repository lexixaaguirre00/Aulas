#include <iostream>

int main () {
   int numero;

    std::cout << "Digite um numero: " << std::endl;
    std::cin >> numero;

    for (int i = 0; i < numero; i++) {
        std::cout << "contador" << i + 1 << std::endl;
    }

    return 0;

}