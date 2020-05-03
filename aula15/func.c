#include <stdio.h>

int soma(int n1, int n2, int n3){
  int res;

  res = n1 +  n2 + n3;

  return res;
}


int main(int argc, char *argv[]){

  int num1, num2, num3;

  printf("Digite o num1: ");
  scanf("%d", &num1);


  printf("Digite o num2: ");
  scanf("%d", &num2);
  

  printf("Digite o num3: ");
  scanf("%d", &num3);
  
  printf("soma: %d\n", soma(num1,num2,num3));

  return 0;
}


