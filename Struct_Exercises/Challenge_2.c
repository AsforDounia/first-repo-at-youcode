#include<stdio.h>


int main(){
    int n ;
    printf("Entrez le nombre de modules : ");
    scanf("%d",&n);
    typedef struct {
        char nom[100] ,prenom[100] ;
        float notes[n] ;
    }Etudiant;
    
    Etudiant etudiant1 ;
    printf("Entrez le nom d'etudiant : ");
    scanf("%s",etudiant1.nom);
    printf("Entrez le prenom d'etudiant : ");
    scanf("%s",etudiant1.prenom);

    for(int i = 0 ; i < n ; i++ ){
        printf("Entrez la note du module %d :" ,i+1);
        scanf("%f",&etudiant1.notes[i]);
    }
    
    printf("les info de votre etudiant est :\nNom : %s \nPrenom : %s\n",etudiant1.nom ,etudiant1.prenom);
    printf("les notes est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("la note de module %d est : %f\n", i+1 , etudiant1.notes[i]);
    }



    return 0;
}