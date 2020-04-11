#include <stdio.h>

int main(void){
  //int a = 2; //10
  //int b = 3; //11
  /*
   *resultara em 10 = 2 & realizada um && bit a bit
   *resultara em 11 = 3 | realizada um || bit a bit
   *resultara em 01 = 1 ^(xor) ou exclusivo retornada 1 quando apenas um dos bits for 1
   *
   * negação ~
   * negação de int a = 0;
   * igual a 0b00000000000000000000000000000000;
   * negando igual a 0b11111111111111111111111111111111;
   *
   * << >>
   * Você empura o valor para a direira / esquerda
   * Por exemplo int a = 0b1000; //numero 8
   * a << 1 --> 16
   * a << 2 --> 32
   * a >> 1 --> 4
   * a >> 2 --> 2
   */

  int a = 0b1000;

  printf("O resultado eh %d\n", a >> 2);



  return 0;
}

