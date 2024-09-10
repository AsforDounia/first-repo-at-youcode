#include <stdio.h>

int main()
{
// Évaluation d'un Prêt
    float Revenu ;
    int Duree, Score ;
    printf("Entrez le Revenu annuel (en euros) ");
    scanf("%f",&Revenu);
    printf("Entrez le Score de crédit (sur 1000) ");
    scanf("%d",&Score);
    printf("Entrez la Durée du prêt (en années) ");
    scanf("%d",&Duree);

    if ( Revenu >= 30000 && Score >= 700 && Duree <= 10 ) {
        printf("Éligible");
    }
    else if( Revenu >= 30000 && Score >= 650 && Duree <= 15  ){
        printf("Éligible avec conditions");
    }
    else {
        printf("Non éligible");
    }
    return 0;
}