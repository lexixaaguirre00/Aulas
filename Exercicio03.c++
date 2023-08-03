#include <iostream>

int main (){

    int numero1;
    int numero2;
    int numero3;

    std::cout << "Digite o numero1:";
    std::cin >> numero1;

    std::cout << "Digite o numero2";
    std::cin >> numero2;

    std::cout << "Digite o numero3";
    std::cin >> numero3;

    int maior = numero1;
    
    if (numero2 > maior){
        maior = numero2;
    }

    if (numero3 > maior){
        maior = numero3;
    }

    std::cout << "O maior numero é:" << maior << std::endl;

    return 0;


}
