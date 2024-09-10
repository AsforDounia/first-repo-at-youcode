#include <stdio.h>

int main() {
    // Positif, Négatif ou Nul
    int n ;
    printf("Entrez un nombre : ");
    scanf("%d",&n);
    if ( n > 0 ){
        printf("Le nombre est positif");
    }
    else if ( n < 0){
        printf("Le nombre est négatif "); 
    }
    else {
        printf("Le nombre est  égal à zéro.");
    }
    return 0;
}