
#include <stdio.h>

int main(){

    int input = 0;

    while (input != 0){
        printf("Digite 0 para sair ou qualquer coisa para continuar: ");
        scanf("%d", &input);
    }

    do {
        printf("Digite 0 para sair ou qualquer coisa para continuar: ");
        scanf("%d", &input);
    } while(input != 0);



    return 0;
}