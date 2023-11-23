#include <stdio.h>
#include <stdlib.h>

int main () { 
 system ("clear");

  int num [7] = {12,45,20,21,19,33,108};
  int i=0,soma=0;

  while (i < 7) {
   soma += num [i];
   i++;
    }
    printf ("o Resultado da Soma é %d\n,soma");
  return 0;
}