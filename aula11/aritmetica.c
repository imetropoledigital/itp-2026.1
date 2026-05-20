#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a; // p é um ponteiro para um inteiro, e

    char letra = 'A';
    char *p_letra = &letra; // p_letra é um ponteiro

    printf("Valor de p_letra: %p\n", p_letra);
    p_letra++;
    printf("Valor de p_letra: %p\n", p_letra);

    printf("Valor de p: %p\n", p);
    p++;
    printf("Valor de p: %p\n", p);

    

    printf("O que tem em p depois do incremento? %d\n", *p);
    printf("O que tem em p_letra depois do incremento? %d\n", *p_letra);


    return 0;
}