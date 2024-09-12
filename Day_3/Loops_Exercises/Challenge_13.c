#include<stdio.h>

int main(){
    // Table de Multiplication avec Somme

    int nombre , mul , som = 0 ;
    printf("Entrez un  un nombre : ");
    scanf("%d",&nombre);
    for (int i = 1 ; i <= 10 ; i++){
        mul = nombre * i ;
        som = som + mul ;
        printf("%d * %d = %d\n",nombre,i,mul);
    }
    printf("somme = %d", som );

    return 0;
}