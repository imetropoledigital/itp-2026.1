#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printVetor(int numeros[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
}

void multiplicaTudoPordois(int *numeros, int tamanho){
    for(int i = 0; i < tamanho; i++){
        *(numeros + i) = *(numeros + i) * 2;
    }
}

int main(){

    int a = 10;
    int b = 20;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    troca(&a, &b);

    printf("Valor de a apos chamada da funcao troca: %d\n", a);
    printf("Valor de b apos chamada da funcao troca: %d\n", b);

    int numeros[5] = {1, 2, 3, 4, 5};
    // imprimir antes

  
    printVetor(numeros, 5);
    multiplicaTudoPordois(numeros, 5);
    printVetor(numeros, 5);



    return 0;
}