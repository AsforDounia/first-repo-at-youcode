#include <stdio.h>

int main()
{
    // Calcul de la Somme des N Entiers

    int  numbre  , i , som =0 ;
    printf("Entrez un nombre entier  : ");
    scanf("%d",&numbre);
    
    for(i = 1 ; i <= numbre ; i++){
        som = som + i ;
    }
    printf("La Somme = %d",som);
    return 0;
}