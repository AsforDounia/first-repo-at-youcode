#include<stdio.h>


int main(){

    typedef struct {
        char nom[100] ,prenom[100] ;
        int age ;
    }personne;
    
    personne personne1 ;
    printf("Entrez le nom : ");
    scanf("%s",personne1.nom);
    printf("Entrez le prenom : ");
    scanf("%s",personne1.prenom);
    printf("Entrez l'age : ");
    scanf("%d",&personne1.age);


    printf("les informations de votre personne est : \nNom : %s\nPrenom : %s\nAge : %d\n", personne1.nom , personne1.prenom , personne1.age);

    
    return 0;
}