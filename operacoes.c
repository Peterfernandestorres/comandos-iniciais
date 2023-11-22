/*programa que realiza a soma entre  Números
com a inclusão da biblioteca de cabeçalho de entrade e saída*/

#include <stdio.h>
/*Função principal do sistema*/

int main(){
  float n1,n2,so,su,mt,dv;
//digitar um numeros e formatos de fazer uma conta

printf ("digite um número e tecle o enter:\n");
  scanf ("%f",&n1);
//dados do numero 1 e sua acessão de memória

printf ("digite outro número e tecle o enter:\n");
  scanf ("%f",&n2);
//dados do numero 2 e sua acessao de memória

so = n1 + n2;

su = n1 - n2;

mt = n1 * n2; 

dv = n1 / n2;
 
printf("\n-----------------------------------------\n");
printf("\n-----------veja os resultados------------\n");
printf("\n- soma: %2.2f                               -\n",so);
printf("\n- subtração: %2.2f                          -\n",su);
printf("\n- multiplicação: %2.2f                      -\n",mt);
printf("\n- Divisão: %2.2f                            -\n",dv);
printf("\n-----------------------------------------\n");

return 0;

}