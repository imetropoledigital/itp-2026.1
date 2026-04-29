#include <stdio.h>

int main(){
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    numero = numero + 0.99999;
    printf("numero=%.3f\n", numero);
    return 0;
}