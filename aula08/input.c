# include <stdio.h>
# include <string.h>

int main(){

    // char nome[50];
    // scanf("%s", nome);
    
    char nome[100];
    fgets(nome, 100, stdin);

    printf("O nome digitado foi: %s\n", nome);

    int tamanhoArray = sizeof(nome);
    printf("O tamanho do texto é: %d\n", tamanhoArray);

    int tamanhoTexto = strlen(nome);    
    printf("O tamanho do texto é: %d\n", tamanhoTexto);

    return 0;
}