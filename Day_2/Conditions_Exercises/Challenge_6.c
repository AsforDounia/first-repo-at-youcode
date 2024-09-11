#include <stdio.h>
#include<conio.h>

int main(){

    float consommation ;
    int type_utilisateur, type_contrat;
    printf("Entrez la consommation  (en kWh) : ");
    scanf("%f",&consommation);
    printf("Entrez le type d'utilisateur (1 pour residentiel, 2 pour commercial)
 : ");
    scanf("%d",&type_utilisateur);
    printf("Entrez le typpe de contrat (0 pour standard, 1 pour reduit)
 : ");
    scanf("%d",&type_contrat);

    if( type_utilisateur == 1 ){
        if( type_contrat == 0 ){
            consommation *= 0.20 ;
        }
        else{
            consommation *= 0.15 ;
        }
    }
    else{
        if( type_contrat == 0 ){
            consommation *= 0.30 ;
        }
        else{
            consommation *= 0.25 ;
        }
    }
    if(consommation > 500 )
        consommation *= 1.1 ;


    printf("la consommation = %f",consommation);

    return 0 ;
}