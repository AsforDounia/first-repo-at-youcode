#include<stdio.h>


typedef struct {
    char nom[100];
    float solde ;
} compte_bancaire;

float modifier_solde(float new_solde){
    float montant;
    printf("Entrez le montant qui ajoute au solde : ");
    scanf("%f",&montant);
    return new_solde + montant ;
}
int main(){
    float montant ;
    compte_bancaire compte1 ;
    

    printf("Entrez le nom : ");
    scanf("%s",compte1.nom);
    printf("Entrez le solde : ");
    scanf("%f",&compte1.solde);

    compte1.solde = modifier_solde(compte1.solde);

    printf("les info de votre compte est : \n");
    printf("Nom : %s \nSolde : %f",compte1.nom,compte1.solde);

    return 0;
}