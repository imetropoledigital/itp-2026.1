#include <stdio.h>

int main(){

    int input;
    printf("Digite uma entrada para realizar a somatória dos primeiros termos: ");
    scanf("%d", &input);

    int somatorio = 0;

    for (int i=1;i<=input;i++){
        somatorio += i;
    }

    printf("O valor da somatório é: %d\n", somatorio);

    return 0;
}