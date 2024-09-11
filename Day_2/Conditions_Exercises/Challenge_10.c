#include <stdio.h>
#include<conio.h>

int main(){

    float montant_total, bonus;
    int  age, annee_cotisation;
    printf("Entrez l'age : ");
    scanf("%f",&age);
    printf("Entrez l'Années de cotisation  :");
    scanf("%f", &annee_cotisation);
    printf("Entrez  Montant total épargné (en euros)  ");
    scanf("%d",&montant_total);

    if( age >= 65 ){
        if( annee_cotisation >= 30 && montant_total >= 100000 )
            printf(" Plan complet avec pension élevée");
        else 
            if ( annee_cotisation >= 20 && montant_total >= 50000 )
                printf(" Plan partiel avec pension moyenne . ");
            else 
                printf("desole . ");
    }
    else 
        printf("Plan épargne non encore disponible et le montant est : %f",montant_total);
    
    if( montant_total > 50000 )
        bonus = 0.05 * ((int) ((montant_total - 5000)/10000)) * montant_total ; 
        montant_total += bonus ;

    printf(" le montant est : %f",montant_total);
   

    return 0 ;
}