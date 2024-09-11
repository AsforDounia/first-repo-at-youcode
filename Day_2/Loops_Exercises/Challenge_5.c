#include <stdio.h>
int main(){
    // Calcul de la Puissance
    int i , n ,exp ,res = 1 ;
    printf("Entrez un nombre de base : ");
    scanf("%d",&n);
    printf("Entrez l'exposant : ");
    scanf("%d",&exp);
    for (i = 1 ; i <= exp  ; i++ ){
            res = res * n ;
    }
    printf("%d ",res);
}