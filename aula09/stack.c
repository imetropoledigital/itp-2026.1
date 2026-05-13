#include <stdio.h>

void cuidado(int n, int vet[]){
    n = 20;
    printf("Dentro da função: n = %d\n", n);
    vet[0] = vet[0] + 10;
    vet[1] = vet[1] + 10;
    vet[2] = vet[2] + 10;
    vet[3] = vet[3] + 10;
    vet[4] = vet[4] + 10;
}

int main(){
    int n = 10;
    int vet[5] = {1, 2, 3, 4, 5};
    cuidado(n, vet);
    printf("Depois da função cuidado:\n");
    printf("n = %d\n", n);
    for(int i = 0; i < 5; i++){
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}