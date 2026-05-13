# include <stdio.h>
# include <string.h>

int main(){

    // char end[] = "FIM";
    // char input[100];

    // printf("Digite um texto: ");
    // scanf("%s", input);

    // int resultado = strcmp(input, end);

    // if (resultado == 0){
    //     printf("IGUAL\n");
    // }else{
    //     printf("DIFERENTE\n");
    // }

    // char texto[] = "Programação em C";
    // char busca[] = "mação";

    // char *resultado = strstr(texto, busca);

    // if (resultado != NULL)
    //     printf("Encontrado: %s\n", resultado);
    // else
    //     printf("Não encontrado\n");

    // return 0;

    // char texto[10];

    // memset(texto, '*', sizeof(texto));
    // texto[9] = '\0';

    // printf("%s\n", texto);

    char texto[] = "Amor-Beleza-Caramba";
    char *token;

    token = strtok(texto, "-");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

    return 0;



}