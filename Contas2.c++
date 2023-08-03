#include <iostream>

int main ()  {


    int a;
    std::cout << "Digite o num1: ";
    std::cin >> a; 

     int b;
    std::cout << "Digite o num2: ";
    std::cin >> b;



{

    int soma = a + b;       
    int subtracao = a - b;  
    int multiplicacao = a * b; 

    std::cout << "soma" << soma << std::endl;
    std::cout << "subtracao" << subtracao << std::endl;
std::cout << "multiplicacao" << multiplicacao << std::endl;

}

return 0;
}