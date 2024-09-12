#include<stdio.h>


int main(){
    //  Saisie et Affichage des Elements
    int  n , table[100] ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }
    // Afficher les valeurs du tableau
    printf("Les valeur de votre tableau est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d \n", table[i]);
    }

    return 0;
}