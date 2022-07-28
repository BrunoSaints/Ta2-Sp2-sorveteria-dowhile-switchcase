#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
int main(int argc, char const *argv[])
{
setlocale(LC_ALL, "portuguese");
    int i;
    do {
        printf ("\nDigite o número de sabor :\n");
        printf ("\n[1] ... FLOCOS\n");
        printf ("\n[2] ... MORANGO\n");
        printf ("\n[3] ... LEITE CONDENSADO\n\n");
        scanf ("%d",&i);
    } while ((i<1) || (i>3)); //enquanto i for menor que 1 ou maior que 3 repita o "do". 
  
    switch (i) { //escolha caso.
        case 1 : 
            printf ("\nVocê escolheu FLOCOS.\n");
            break;
        case 2 : 
            printf ("\nVocê escolheu MORANGO.\n");
            break;
        case 3 : 
            printf ("\nVocê escolheu LEITE CONDENSADO.\n");
            break;
    }
return EXIT_SUCCESS;
}   
