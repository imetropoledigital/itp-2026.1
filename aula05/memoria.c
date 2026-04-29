#include <stdio.h>

int main(){

    char nome[4] = "BTI";

    printf("Endereço de nome: %p\n", nome);

    for (int i=0;i<4;i++){
        printf("letra: %c - posição na memoria: %p\n", nome[i], &nome[i]);
    }

    int elementos[4] = {1,2,3,4};
    
    printf("Endereço de elementos: %p\n", elementos);

    for (int i=0;i<4;i++){
        printf("Elemento: %d - posição na memoria: %p\n", elementos[i], &elementos[i]);
    }

    

    // nome[0]
    // nome[1]
    // nome[2]
    // nome[3]

    return 0;
}