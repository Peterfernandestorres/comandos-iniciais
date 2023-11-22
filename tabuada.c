#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela
 //variavel que guarda TEXTO
  
 int contar,num;
 printf ("digite uum numero da tabuada\n");
 scanf ("%d",&num);

 for (contar = 1 ; contar <= 10 ; contar ++) {
    printf ("%d x %d = %d\n",num,contar,num*contar);
 }
  return 0;
}