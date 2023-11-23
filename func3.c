#include <stdio.h>
#include <stdlib.h>
#include "mat.h"

 int soma (int valores [], int tamanho);

int main () { 
 system ("clear");
 int num [10] = {10,35,65,12,40,56,76};
 printf ("a soma dos valores é %d\n",soma (num,10));
 printf ("o maior valor é %d\n",max (num,10));
 return 0;

}