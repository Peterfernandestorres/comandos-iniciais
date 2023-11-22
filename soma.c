/*programa que realiza a soma entre dois Números
com a inclusão da biblioteca de cabeçalho de entrade e saída*/

#include <stdio.h>
/*Função principal do sistema*/

int main(){
  int numero1,numero2,resultado;
//digitar um numero para ele colocar seus números automáticamente

printf ("digite um número:\n");
  scanf ("%d",&numero1);
//dados do numero 1 e sua acessão de memória

printf ("digite outro número:\n");
  scanf ("%d",&numero2);
//dados do numero 2 e sua acessao de memória

resultado = numero1 + numero2;
printf("o resultado da soma é %d\n\n",resultado);
//resultado dos valores

printf ("posição em memória da variavel Número1 %p\n",&numero1);
 printf ("posição em memória da variavel Número1 %p\n",&numero2);
  printf ("posição em memória da variavel Número1 %p\n",&resultado);
//posição de cada memória e suas variaveis em formato 
 
}