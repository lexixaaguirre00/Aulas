#include <stdio.h>

int main () {
    int idade; // declaraçao da variavel 'idade' do tipo inteiro

    printf ("Digite sua idade:");
    scanf ("%d" , &idade); // leitura de idade fornecida pelo usuario

    printf ("Sua idade é: %d\n", idade); // exibiçao da idade

    return 0;
}