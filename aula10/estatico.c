#include <stdio.h>

int x = 10;

void doSomething(){
    static int y = 5;
    printf("doSomething: Valor inicial de Y %d\n", y);
    y += 5;
    printf("doSomething: Value of y: %d\n", y);
}

void doSomethingElse(){
    x *= 2;
    printf("doSomethingElse: Value of x: %d\n", x);
}

int main(){
    int i = 0;
    while (1){
        scanf("%*s");
        if (i % 2 == 0){
            doSomethingElse();
        } else {
            doSomething();
        }
        i++;
    }
    
    return 0;
}