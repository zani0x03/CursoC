#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fatal(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}

void usage(void){
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  exit(1);
}

bool ispe(const unsigned char *b){
  if (b[0] != 'M' || b[1] != 'Z')
    return false;

  return true;
}

int main(int argc, char *argv[]){
  FILE *fh;
  unsigned char buffer[32];

  if (argc != 2)
    usage();

  fh = fopen(argv[1], "rb");

  if (fh == NULL)
    fatal("arquivo nao encontrado ou sem permissao de leitura");

  if (fread(buffer, 32, 1, fh) != 1)
    fatal("nao consegui ler os 32 bytes do arquivo");

  fclose(fh);

  if (!ispe(buffer))
    fatal("arquivo nao parece ser um executal PE");

  return 0;

}
