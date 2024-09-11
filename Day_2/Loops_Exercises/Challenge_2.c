#include<stdio.h>
int main () {
    // Factorielle d'un Nombre
    int n , i ,x =1 ;
    printf("Entrez un nombre entier positif : ");
    scanf("%d",&n);
    for (i = 1 ; i <= n ; i++ ){
        x = x * i ;

    }
    printf("La factorielle de votre nombre est : %d",x);
}