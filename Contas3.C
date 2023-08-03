#include <stdio.h>


 int somar (int num1, int num2){
 int resultado = num1 + num2;
 return resultado; 
 }


 int subtrair (int num1, int num2) {
 int resultado = num1 - num2;
 return resultado;
}
    int main () {
    int numero1, numero2;
    
    printf ("Digite um numero: ");
    scanf ("%d", &numero1);

    printf ("Digite um numero: ");
    scanf ("%d", &numero2);

    int resultadoSoma = somar (numero1, numero2);
    printf ("A soma é: %d\n", resultadoSoma);

    int resultadoSub = subtrair (numero1, numero2);
    printf ("A subtracao é: %d\n", resultadoSub);


    return 0;
}