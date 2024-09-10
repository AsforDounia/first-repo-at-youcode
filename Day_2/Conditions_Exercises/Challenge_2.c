#include <stdio.h>

int main()
{
// Calcul de Prime d'Assurance Auto
    int age , type_voiture , nombre_accidents   ;
    float prime_base , prime ;
    printf("Entrez votre age : ");
    scanf("%d",&age);
    printf("Entrez le type voiture  (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d",&type_voiture);
    printf("Entrez le nombre accidents au cours des 5 dernieres annees : ");
    scanf("%d",&nombre_accidents);
    printf("Entrez le Prime de base : ");
    scanf("%f",&prime_base);
    if( age < 25 ){
        prime = prime_base * 1.5 ;
    }
    else if (age <= 65 ){
        prime = prime_base ;
    }
    else {
        prime = prime_base * 1.2 ;
    }
    if ( type_voiture == 1 ){
        prime = prime * 2 ;
    }
    else if ( type_voiture == 2 ){
        prime = prime * 1.2 ;
    }
    else if ( type_voiture == 3 ){
        prime = prime * 1.1;
    }
    if ( nombre_accidents > 1 ){
        prime = prime + prime_base * 1.3;
    }
    printf("la prime d'assurance est : %f",prime);
    return 0;
}