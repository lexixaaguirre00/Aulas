#include <iostream>
int main () {

    int a = 45;
    int b = 12;

    bool igual = (a == b);
    bool diferente = (a != b);
    bool maior = (a > b);
    bool menor = (a < b);
    bool maiorOuIgual = (a >= b);
    bool menorOuIgual = (a <= b);

    std::cout << "igual" << igual << std::endl;
    std::cout << "diferente" << diferente << std::endl;
    std::cout << "maior" << maior << std::endl;
    std::cout << "menor" << menor << std::endl;
    std::cout << "maiorOuIgual" << maiorOuIgual << std::endl;
    std::cout << "menorOuIgual" << menorOuIgual << std::endl;

return 0;

}