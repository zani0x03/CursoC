#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  int i = INT_MAX;

  printf("O tamanho de i (int): %zu / bits %zu\n",sizeof i, sizeof i * 8);

  printf("Valor de d: %d\n", i);

  return 0;
}

