
#include <stdio.h>
#include <math.h>
#include "funcoes.h"

void imprimirResultado(int resultado){
    printf("%d\n", resultado);
}

void imprimirSaudacao(){
    printf("Olá todos, bem vindos ao meu programa!\n");
}

int leLadoOuFim(){
    int lado;
    scanf("%d", &lado);
    return lado;
}

void imprimeNEAnteriores(int n){
    if (n > 0){
        printf("%d\n", n);
        imprimeNEAnteriores(n-1);       
    }
}

int main(){

    imprimeNEAnteriores(1000);

    int lado1, lado2, percentual;

    while ((lado1 = leLadoOuFim()) && lado1 != 0){
        scanf("%d %d", &lado2, &percentual);
        int resultado = calculaLadoTerreno(lado1, lado2, percentual);
        imprimirResultado(resultado);
    }

    return 0;
}

int calculaLadoTerreno(int ladoCasa1, int ladoCasa2, int percentualConstrucao){
    int areaCasa = ladoCasa1 * ladoCasa2;
    double areaTerreno = (100 * areaCasa)/percentualConstrucao;
    int ladoTerreno =  (int) sqrt(areaTerreno);
    return ladoTerreno;
}

