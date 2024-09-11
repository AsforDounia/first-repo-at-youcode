#include <stdio.h>
#include<conio.h>

int main(){

    float budget;
    int dest, nbr_personne;
    printf("Entrez le budget : ");
    scanf("%f",&budget);
    printf("Entrez la distination : ");
    scanf("%d",&dest);
    printf("Entrez le nombre de personne : ");
    scanf("%d",&nbr_personne);

    if( budget > 1000 ){
        printf("\nType de voyage : Haut gamme .");
        if( (dest == 1) && (nbr_personne > 2))
            printf("\nDestination : Plage");
        else 
            if( (dest == 2) && ( nbr_personne <= 2 ) )
                printf("\nDestination : Montagne");
            else 
                printf("\nDestination : Ville.");
    }
    else{
        if( (budget >= 500 ) && (budget <1000 )){
            printf("\nType de voyage : moyen . ");
            if( (dest == 2) && (nbr_personne <= 2))
                printf("\nDestination : Montagne");
            else 
                printf("\nDestination : Ville.");
        }
        else{
            printf("\nType de voyage : economique.");
            printf("\nDestination : Ville.");
        }
    }




    return 0 ;
}