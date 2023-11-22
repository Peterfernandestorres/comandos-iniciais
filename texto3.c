#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela
 //variavel que guarda TEXTO

    char aluno [] = "";
    float n1,n2,n3,n4,media;
    
    printf ("Digite o Nome do aluno\n");
    scanf ("%s",&aluno);

    printf ("Digite a primeira nota\n");
    scanf ("%f",&n1);

    printf ("Digite a segunda nota\n");
    scanf ("%f",&n2);

    printf ("Digite a terceira nota\n");
    scanf ("%f",&n3);

    printf ("Digite a quarta nota\n");
    scanf ("%f",&n4);

    media = (n1 + n2 +n3 + n4) / 4;
    
    printf ("aluno %s media %2f\n",aluno,media);
    if (media >=6){
     printf ("aluno aprovado\n");
    }
    else {
     printf ("aluno reprovado\n");

    }




return 0;

}