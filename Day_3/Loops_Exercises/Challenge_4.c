#include <stdio.h>

int main()
{
    // Inversion d'un Entier

    int  numbre , numR , inverse =0 ;
    printf("Entrez un nombre entier  : ");
    scanf("%d",&numbre);
    
    while(numbre != 0){
        numR = numbre % 10 ;
        inverse = inverse * 10 + numR ;
        numbre = numbre / 10 ;
    }
    printf("l'inverse de votre nombre est : %d",inverse);
    return 0;
}