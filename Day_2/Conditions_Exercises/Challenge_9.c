#include <stdio.h>
#include<conio.h>

int main(){

    float salaire_base, salaire, prime, prix_heure;
    int  nbr_heure_supp, type_post;
    printf("Entrez salair de base : ");
    scanf("%f",&salaire_base);
    printf("Entrez Type de poste (1 pour junior, 2 pour senior) :  ");
    scanf("%d",&type_post);
    printf("Entrez le prix d'heure  :");
    scanf("%f", &prix_heure);
    printf("Entrez ombre d'heures supplementaires :  ");
    scanf("%d",&nbr_heure_supp);

    if( type_post == 1){
        prime = salaire_base * 0.1 ;
    }
    else 
        if( type_post == 2){
            prime = salaire_base * 0.2 ;
        }
    salaire = salaire_base + nbr_heure_supp * prix_heure * 1.5 + prime ; 
    printf("Salire = : %f",salaire);

    return 0 ;
}