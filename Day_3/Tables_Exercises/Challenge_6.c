#include<stdio.h>


int main(){
    //  Multiplication des Elements
    int  n ,table[100] , fac  ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);
    printf("Entrez la valeur de facteur : ");
    scanf("%d",&fac);
    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }
    // Afficher les valeurs du tableau
    printf("Les valeur de votre tableau apres la multiplication est : \n");
    for( int i = 0 ; i < n ; i++ ){
        table[i] *= fac ;
        printf("%d \n", table[i]);
    }

    return 0;
}