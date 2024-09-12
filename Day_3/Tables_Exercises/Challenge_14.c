#include<stdio.h>


int main(){
    //  Calculer la Moyenne


    int  n ,table[100] , som = 0  ;
    float moy ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }

    
    for( int i = 0 ; i < n ; i++ ){
        som = som + table[i];
    }
    moy = som / n ;


    printf("La moyenne des elements de votre tableau est %f : ", moy);

    return 0;
}