# include <stdio.h>
# include <stdlib.h>
int main (){

int num;
system ("clear");
printf ("digite um numero de ano e lhe diremos se é um ano bissexto ou não\n");
scanf ("%d",&num);

if (num % 4 == 0)
   printf ("o numero %d é BISSEXTO\n");

else 
  printf ("o numero %d não é BISSEXTO\n");   

}
