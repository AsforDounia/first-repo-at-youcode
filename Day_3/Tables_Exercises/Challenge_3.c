#include<stdio.h>


int main(){
    //  Saisie et Affichage des Elements
    int  n , table[100] , som = 0 ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
        som = som + table[i] ;
    }
    
    printf("La somme totale les elements de votre tableau est : %d", som);

    return 0;
}