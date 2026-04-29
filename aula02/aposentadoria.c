#include <stdio.h>

int main(){

    int idade;
    int tempoContribuicao;
    char sexo;

    printf("Digite o seu sexo (M para masculino e F para feminino): ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de contribuição: ");
    scanf("%d", &tempoContribuicao);

    // printf("Dados: sexo=[%c], idade=[%d], tempo=[%d]\n", sexo, idade, tempoContribuicao);

    if (sexo != 'M' && sexo != 'F'){
        printf("Sexo inválido! Deve ser M ou F.\n");
        return -1;
    }

    if (idade <= 0){
        printf("Idade inválida!");
        return -1;
    }

    if (tempoContribuicao < 0 || tempoContribuicao > idade){
        printf("Tempo de contribuição inválido!\n");
        return -1;
    }

    //se eu chegar a executar aqui...

    int pontuacao = idade + tempoContribuicao;
    int tempoContribuicaoMinimo;
    int pontuacaoMinima;

    if (sexo == 'M'){
        tempoContribuicaoMinimo = 35;
        pontuacaoMinima = 103;
    }

    if (sexo == 'F'){
        tempoContribuicaoMinimo = 30;
        pontuacaoMinima = 93;
    }

    if (tempoContribuicao >= tempoContribuicaoMinimo && pontuacao >= pontuacaoMinima){
        printf("Parabéns, você já pode se aposentar!\n");
    }else{
        printf("Infelizmente você ainda não preeche os requisitos para aposentadoria.\n");
    }

    return 0;

}