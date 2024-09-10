#include <stdio.h>

int main()
{
    // Gestion des Conges
    int Jours_accordes , Jours_Utilises , Jours_restants , Statut ;
    printf("Entrez Nombre total de jours de conges accordes : ");
    scanf("%d",&Jours_accordes);
    printf("Entrez Nombre de jours de conges utilises : ");
    scanf("%d",&Jours_Utilises);
    printf("Entrez Statut de l'employe (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d",&Statut);

    if ( Statut == 1 ){
        Jours_restants = Jours_accordes - Jours_Utilises ;
    }
    else if( Statut == 0 ){
        Jours_restants = ( Jours_accordes / 2 ) - Jours_Utilises ;
    }
    if ( Jours_Utilises > Jours_accordes ){
        printf("message d'alerte : les jours utilises depassent les jours accordes : ");
    }
    else{
        printf("les jours de conge restant : %d",Jours_restants);
    }
    return 0;
}