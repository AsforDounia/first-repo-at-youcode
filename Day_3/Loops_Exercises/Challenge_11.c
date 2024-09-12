#include<stdio.h>


int main(){
    //  Moyenne des Nombres
    int  n , som = 0 , x = -1  ;
    float moy ;
    // Remplir le tableau
    do{
        printf("Entrez une valeur : "); 
        scanf("%d",&n);
        som = som + n ;
        x++ ;

    }while( n != 0 );
    // ======================>
    moy = som / x ;
    printf("La Moyenne de votre serie est : %.2f ", moy);

    return 0;
}