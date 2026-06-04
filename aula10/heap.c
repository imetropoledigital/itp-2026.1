#include <stdio.h>
#include <stdlib.h>

void doSomething(){
    int quantidade = 1000000;
    int *vetor = (int *) malloc(quantidade * sizeof(int));
    
    for (int i = 0; i < quantidade; i++){
        vetor[i] = i;
    }

    free(vetor);

}

int main() {

    while (1){
        scanf("%*s");
        doSomething();
    }




    return 0;
}