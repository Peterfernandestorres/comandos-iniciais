#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela

  int anoi,anof,contar,qtd;
  qtd=0;

  printf ("digite o ano inicial\n");
  scanf ("%d",&anoi);
     
  printf ("digite o ano final\n");
  scanf ("%d",&anof);

  for (contar = anoi ; contar <= anof ; contar++){
   if (contar % 4 == 0){ //o % dividido
    printf ("o ano %d é Bissexto\n,contar");
     printf ("a quantidade de anos bissexto é %d\n",qtd);
   }
  }
  return 0;

}
