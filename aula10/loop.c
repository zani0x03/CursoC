#include <stdio.h>

int main(void){
  
  unsigned int i = 0;


  for (i=0 ;i < 3;i++){
    printf("O valor de i eh: %u\n", i);
    //i++;
  }
  
  i = 0;
  while (i < 2){
    printf("O valor de i eh: %u\n", i);
    i++;
  }
  
  i=0;
  do{ 
    printf("O valor de i eh: %u\n", i);
    i++;
  }while (i < 3);
  
  
  return 0;

}

