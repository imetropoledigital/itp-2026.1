#include <stdio.h>

int vetor[100000000] = {0};


int main() {

  for (int i = 0; i < 100000000; i++){
    vetor[i] = i;
  }

  printf("Alocação concluída\n");
  scanf("%*s");
  printf("Execução concluída\n");


  return 0;
}