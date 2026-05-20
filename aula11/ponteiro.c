#include <stdio.h>

void meteAmao(int *ponteiro){
    *ponteiro = *ponteiro * 2;
}

int main(){


    int number = 0;

    scanf("%d", &number);

    int *ponteiro = &number;

    printf("Valor da variavel number: %d\n", number);
    printf("Valor do ponteiro para number: %p\n", ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);

    *ponteiro = 20;

    printf("Valor da variavel number apos modificacao: %d\n", number);

    int alunos = 40;
    meteAmao(&alunos);
    printf("Valor de alunos apos chamada da funcao meteAmao: %d\n", alunos);

    return 0;
}