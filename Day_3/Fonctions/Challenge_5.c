#include <stdio.h>
    // Fonction de Factorielle



int Factorielle(int n){
    int i ,x =1 ;
    for (i = 1 ; i <= n ; i++ ){
        x = x * i ;
    }
    return x ;
}
int main() {
    int n ;
    printf("Entrez un nombre entier positif : ");
    scanf("%d",&n);
    printf("le Factorielle de %d est : %d ", n ,Factorielle (n));
    return 0;
}
