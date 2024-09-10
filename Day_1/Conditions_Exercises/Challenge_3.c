#include <stdio.h>

int main() {
    // Somme de Deux Valeurs
    int x,y,s;
    printf("Enterz le premier nombre : ");
    scanf("%d",&x);
    printf("Enterz le deuxieme nombre : ");
    scanf("%d",&y);
    if ( x == y ){
        s = ( x + y ) * 3;
        printf("Les deux valeurs sont identiques alors le triple de leur somme est : %d",s);
    }
    else{
        s = x + y;
        printf("La somme est : %d",s);
    }
    return 0;
}