#include <stdio.h>
#include<conio.h>

int main(){

    float revenu , deductions, impots;
    int statut;
    printf("Entrez Revenu annuel (en euros) : ");
    scanf("%f",&revenu);
    printf("Entrez Statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d",&statut);

    switch(statut){
        case 1 :
            deductions = 1000 ; 
            break;
        case 2 : 
            deductions = 2000 ; 
            break;
        case 3 : 
            deductions = 3000 ; 
            break;
    }

    revenu -= deductions ; 

    if( revenu <= 20000 ){
        impots = revenu * 0.5 ;
    }
    else 
        if ( (revenu > 20000) && (revenu <= 50000) ){
            impots = revenu * 0.1 ;
        }
        else 
            impots = revenu * 0.2 ;

    printf("les impots = %f", impots);

    return 0 ;
}