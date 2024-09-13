#include <stdio.h>
    // Fonction de Somme

int somme(int x , int y){
    int som = 0 ;
    som = x + y ;
    return som;
}
int main() {
    int x , y ;
    printf("Entrez le premier nombre : ");
    scanf("%d",&x);
    printf("Entrez la deuxieume nombre : ");
    scanf("%d",&y);
    printf("la somme de %d et %d est : %d ", x , y ,somme (x,y));
    
    return 0;
}