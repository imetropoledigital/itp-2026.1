#include <stdio.h> 
#include "aluno.h"

void lerAluno(Aluno *a){
    printf("Digite o nome do aluno: ");
    scanf("%s", a->nome);
    printf("Digite a idade do aluno: ");
    scanf("%d", &a->idade);
    printf("Digite a nota do aluno: ");
    scanf("%f", &a->nota);
    a->aulaReforco = DOMINGO;
}

void imprimeAluno(Aluno a){
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}

void lerTurma(Aluno turma[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        lerAluno(&turma[i]);
    }
}

void imprimeTurma(Aluno turma[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Aluno %d:\n", i+1);
        imprimeAluno(turma[i]);
        printf("\n");
    }
}

void alteraNota(Aluno a){
    a.nota = 10.0;
}

void alteraNotaPtr(Aluno *a){
    a->nota = 10.0;
}

int main(){

    Aluno eu = {
            nome: "Gustavo", 
            idade: 20, 
            nota: 8.5, 
            dataNascimento: {1, 1, 2000}, 
            aulaReforco: SEGUNDA
    };

    alteraNotaPtr(&eu);
    imprimeAluno(eu);
    
    // int tamanhoTurma = 2;
    // Aluno turma[tamanhoTurma];

    // lerTurma(turma, tamanhoTurma);
    // imprimeTurma(turma, tamanhoTurma);

    return 0;
}