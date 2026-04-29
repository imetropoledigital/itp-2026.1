
#include <stdio.h>

int main()
{
    int escolha;

    do {

        printf("**** MENU ****\n");
        printf("Digite 1 para calculo de fibonacci, 2 para soma e 0 para sair: ");
        scanf("%d", &escolha);

        int input = 0;
        int resultado = 0;

        switch (escolha)
        {
        case 1:

            printf("Digite uma entrada: ");
            scanf("%d", &input);

            if (input < 0)
            {
                printf("Errro. Digite um número positivo\n");
                return 0;
            }

            int atual = 1, anterior = 0;

            if (input == 0)
            {
                resultado = 0;
            }
            else if (input == 1)
            {
                resultado = 1;
            }
            else
            {
                for (int i = 2; i <= input; i++)
                {
                    resultado = atual + anterior;
                    anterior = atual;
                    atual = resultado;
                }
            }

            printf("Resultado: %d\n", resultado);
            break;
        case 2:
            printf("Digite os dois número: \n");
            int a,b;
            scanf("%d", &a);
            scanf("%d", &b);
            printf("A soma de %d+%d=%d \n", a, b, (a+b));
            break;
        }

    } while (escolha != 0);

    printf("Xau!\n");

    return 0;
}