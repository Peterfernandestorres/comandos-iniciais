#include <stdio.h>
#include <stdlib.h>

int main () {
 system ("clear");//Limpar a Tela
 
 int final_placa;
 printf ("digite o final da placa do carro\n");
 scanf ("%d",&final_placa);

 switch (final_placa) {
    case 1:
    printf ("rodizio do veiculo na seunda-feira\n");
    break;

    case 2:
    printf ("rodizio do veiculo na segunda-feira\n");
    break;

    case 3:
    printf ("rodizio do veiculo na terça-feira\n");
    break;

    case 4:
    printf ("rodizio do veiculo na terça-feira\n");
    break;

    case 5:
    printf ("rodizio do veiculo na quarta-feira\n");
    break;

    case 6:
    printf ("rodizio do veiculo na quarta-feira\n");
    break;

    case 7:
    printf ("rodizio do veiculo na quinta-feira\n");
    break;

    case 8:
    printf ("rodizio do veiculo na quinta-feira\n");
    break;
    
    case 9:
    printf ("rodizio do veiculo na sexta-feira\n");
    break;

    case 0:
    printf ("rodizio do veiculo na sexta-feira\n");
    break;

    default:
    printf ("esse final não existe\n");
 }
 printf ("\n");
 return 0;

 
}
 
