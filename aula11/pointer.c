#include <stdio.h>

int main(void){
  
  int a[] = {2017,2018,2019};

  for (int i=0; i<3;i++)
    printf("%d\n", a[i]);


  int i = 2017;
  int *p;

  p = &i;

  printf("o endereco da variavel i em memoria eh: %p\n", &i);
  printf("o endereco da variavel pem memoria eh: %p\n", p); 
  
  printf("o valor da variavel i eh:%d\n", i);
  printf("o valor da variavel p eh:%d\n",*p);
  





  return 0;

}

