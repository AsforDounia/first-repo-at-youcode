#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    // Selection de Sortie


    int jours ;
        printf("============= Menu ============= \n");
        printf("Option  1 : Dimanche \nOption 2 : Lundi\nOption 3 : Mardi\nOption 4 : Mercredi\nOption 5 : Jeudi\nOption 6 : Vendredi\nOption 7 : Samedi\n");

        scanf("%d",&jours);
    switch(jours){
        case 1 : printf("Dimanche\n") ;
        case 2 : printf("Lundi\n") ;
        case 3 : printf("Mardi\n") ;
        case 4 : printf("Mercredi\n") ;
        case 5 : printf("Jeudi\n") ;
        case 6 : printf("Vendredi\n") ;
        case 7 : printf("Samedi\n") ;
            break;
        default :
            printf("le choix et invalide ");
    }

    return 0;
}