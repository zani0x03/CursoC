#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
  float f = 1;
  double d = 1;

  printf("O tamanho de f (float): %zu / bits %zu\n",sizeof f, sizeof f * 8);
  printf("O tamanho de d (double): %zu / bits %zu\n",sizeof d, sizeof d * 8);

  printf("Valor de f: %f\n", f);
  printf("Valor de d: %f\n", d);

  return 0;
}

