#include <stdio.h>
    // Fonction de Multiplication


int produit ;
int multiplication(int x , int y){
    produit = x * y ;
    return produit ;
}
int main() {
    int x , y ;
    printf("Entrez le premier nombre : ");
    scanf("%d",&x);
    printf("Entrez la deuxieume nombre : ");
    scanf("%d",&y);
    printf("%d * %d = %d ", x , y ,multiplication (x,y));
    return 0;
}