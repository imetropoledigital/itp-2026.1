#include <stdio.h>

int main(){

    int fibo[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    printf("Valor do endereço do primeiro elemento do array é: %p\n", fibo);
    printf("Valor do endereço do primeiro elemento do array é: %p\n", &fibo[0]);

    // primeiro elemento do array
    printf("O primeiro elemento é: %d\n", fibo[0]);
    printf("O primeiro elemento é: %d\n", *fibo);

    // segundo elemento do array
    printf("O segundo elemento é: %d\n", fibo[1]);
    printf("O segundo elemento é: %d\n", *(fibo + 1));

   // terceiro elemento do array
    printf("O terceiro elemento é: %d\n", fibo[2]);
    printf("O terceiro elemento é: %d\n", *(fibo + 2));

}