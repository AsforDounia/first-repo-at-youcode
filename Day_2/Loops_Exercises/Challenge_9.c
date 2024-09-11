#include <stdio.h>

int main()
{
    // Compteur de Chiffres

    int  numbre  , Compteur =0 , res ;
    printf("Entrez un nombre entier  : ");
    scanf("%d",&numbre);
    
    while(numbre != 0){
        res = numbre % 10 ;
        Compteur++;
        numbre = numbre / 10 ;
    }
    printf("le nombre de chiffres dans votre entier est : %d",Compteur);
    return 0;
}