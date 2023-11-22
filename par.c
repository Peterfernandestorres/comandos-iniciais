# include <stdio.h>
# include <stdlib.h> //comando para CLEAR SCREEN (limpar a tela)

int main (){
//vamos usar o comando  clrscr (clear screen) para limpar a tela antes de executar os demais comandos

int num;
printf ("digite um numero e lhe diremos se a resposta é par ou impar\n");
scanf ("%d",&num);

if (num % 2 == 0)
   printf ("o numero %d é PAR\n");

else 
  printf ("o numero %d é IMPAR\n");   








}