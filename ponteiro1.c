#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela
 int valor =32;
 int novo = valor;
 int num = 2;
 int* pnum = &num;
 int xnm = *pnum;

 char nome [50] = "Pedro idiota como você vai ?, olha esses numeros";

 printf ("olá %s\n\n",nome);
 printf ("posição de %p\n",nome);



 printf ("o valor é %d\n",valor);
 printf ("a posição de memória de valor é %p\n",&valor);

 printf ("O valor denovo é %d\n",&novo);
 printf ("a posição de memória de novo é %p\n",&novo);

 printf ("o valor de num é %d\n",&num);
 printf ("a posição de memória de num é %p\n",pnum);

 printf ("o valor de xnm é %d\n,xnum");
 





 return 0;









}