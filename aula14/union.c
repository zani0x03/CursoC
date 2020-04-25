#include <stdio.h>
#include <stdlib.h>
#include <string.h>


union st {
  unsigned char id;
  unsigned int num;
};



int main(int argc, char *argv[]){

  union st s;

  s.id = 3;
  s.num = 2017;

  printf("s.id: %d\n", s.id);
  printf("s.num: %d\n", s.num);



  return 0;
}


