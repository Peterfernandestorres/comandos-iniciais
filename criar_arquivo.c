#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main () {
    FILE *arq = fopen ("texto.txt","w");
 tela();
 system ("clear");
 fprintf (arq,"hoje é Quarta-Feira");
 fclose (arq);
 

 printf ("O Arquivo foi Criado....\n");




}