#include<stdio.h>


void AfficherLivre(char titre[100],char auteur[100] , int annee){
    printf("Les informations de Livre %d : \n");
    printf("Titre : %s\n",titre);
    printf("Auteur : %s\n",auteur);
    printf("Annee de publication : %d\n",annee);

}
int main(){
    typedef struct {
        char titre[100] , auteur[100] ;
        int annee ;
    }Livre;

    Livre Livre1 ;
    printf("Entrez le titre de Livre : ");
    scanf("%s",Livre1.titre);
    printf("Entrez l'auteur de Livre : ");
    scanf("%s",Livre1.auteur);
    printf("Entrez le annee du publication de Livre : ");
    scanf("%d",&Livre1.annee);
    AfficherLivre(Livre1.titre,Livre1.auteur,Livre1.annee);
       
    
    // 
        


    return 0;
    
}
