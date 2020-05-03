#include <stdio.h>
#include "f.h"

#define MSG "teste tiago"

#define QUAD(x) (x*x)

//#define DEBUG 1 

#define DEBUG
//#undef DEBUG

#define VAR(x) printf("A variavel "#x" tem valor: %d\n", x);


int main(int argc, char *argv[]){

  int contador = 90;

  printf("%s\n",MSG);

  printf("%d\n", QUAD(8));

  //imprime("oie");

#ifdef DEBUG
  printf("Estou na linha %d\n", __LINE__);
  VAR(contador);
#endif

  return 0;
}


