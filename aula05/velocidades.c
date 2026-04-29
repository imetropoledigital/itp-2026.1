#include <stdio.h>

int main(){

    int tamanho = 5;
    float velocidades[tamanho];

    printf("Digite as velocidades: \n");
    for (int i=0;i<tamanho;i++){
        scanf("%f", &velocidades[i]);
    }

    printf("As velocidades recebidas são: ");

    for (int i=0;i<tamanho;i++){
        printf("%f ", velocidades[i]);
    }

    printf("\n");

    float somatoria = 0;
    for (int i=0;i<tamanho;i++){
        somatoria += velocidades[i];
    }

    float velocidadeMedia = somatoria / tamanho;

    printf("A velocidade média é: %f \n", velocidadeMedia);


    float velocidadeMaxima = velocidades[0];
    float velocidadeMinima = velocidades[0];

    for (int i=1;i<tamanho;i++){
        if (velocidades[i] > velocidadeMaxima){
            velocidadeMaxima = velocidades[i];
        }
        if (velocidades[i] < velocidadeMinima){
            velocidadeMinima = velocidades[i];
        }
    }

    printf("A velocidade máxima: %f | mínima: %f \n", velocidadeMaxima, velocidadeMinima);

    return 0;
}