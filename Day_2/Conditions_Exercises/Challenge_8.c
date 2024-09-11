#include <stdio.h>

int main(){

    
    int age , histo ;
    printf("Entrez l'age : ");
    scanf("%f",&age);
    printf("Entrez Historique medical (0 pour aucun probleme, 1 pour probleme mineur, 2 pour probleme majeur) :  ");
    scanf("%d",&histo);

    if( age < 30 ){
        
        printf(" plan de base . ");
    }
    else{
        if ( histo == 0 ){
            printf(" plan de base . ");
        }
        if ( histo == 1 ) 
            printf(" plan etendu . ");
    }

    if( histo == 2 )
        printf("Ajoutez une couverture supplementaire pour les problemes majeurs.");

    

    return 0 ;
}