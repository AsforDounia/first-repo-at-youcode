#include <stdio.h>
    // Fonction de Minimum



int minimum(int x , int y){
    if( x <= y ){
        return x;
    }
    else {
        return y;
    }
}
int main() {
    int x , y ;
    printf("Entrez le premier nombre : ");
    scanf("%d",&x);
    printf("Entrez la deuxieume nombre : ");
    scanf("%d",&y);

    printf("le nombre max entre %d et %d est : %d ", x , y ,minimum (x,y));
    return 0;
}