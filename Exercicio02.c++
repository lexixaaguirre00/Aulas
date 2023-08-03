#include <iostream>

int main() {
   int numero;

   std::cout << "Digite um numero inteiro:";
   std::cin >> numero;

   int resultado = numero * 3;

   std::cout << "O dobro do numero é:" << resultado << std::endl;

   return 0;
}