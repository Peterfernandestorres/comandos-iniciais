#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela

  int x;
  int t = 0;
  for (x = 1 ; x <= 100 ; x++) {
  if (x % 2 == 0) {
  printf ("o numero %d é PAR\n",x);
  t++;
     }
  }
  printf ("a Quantidade de Pares é %d\n",t);
     return 0;
}