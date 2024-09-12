#include <stdio.h>
int main(){
    // Calcul de la Puissance
    int i =1 , n ,exp ,res = 1 ;
    printf("Entrez un nombre de base : ");
    scanf("%d",&n);
    printf("Entrez l'exposant : ");
    scanf("%d",&exp);
    
    while(i <= exp){
        res = res * n ;
        i++ ;
    }
    printf("%d ",res);
    return 0;
}