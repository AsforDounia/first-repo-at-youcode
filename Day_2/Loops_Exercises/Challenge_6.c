#include <stdio.h>
int main(){
    // Affichage des N Premiers Nombres Pair
    int i , n ;
    printf("Entrez un nombre entier  : ");
    scanf("%d",&n);
    for (i = 1 ; i <= n * 2 ; i++ ){
        if( i % 2 == 0) {
            printf("%d ",i);
        }
    }
}