#include <stdio.h>

char toUpperCase(char letra){
    return letra - 32;
}

char toLowerCase(char letra){
    return letra + 32;
}

int main(){

    // char letra = 'A';
    // printf("%c\n", toLowerCase(letra));

    double x = 0.1f + 0.2f;

    if (x == 0.3f){
        printf("IGUAL!!\n");
    }

    printf("%.11f\n", x);

    return 0;
}