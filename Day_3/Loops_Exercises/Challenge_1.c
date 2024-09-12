#include<stdio.h>

int main(){
    // Table de Multiplication Inversee
    int nombre , mul ;
    printf("Entrez un  un nombre : ");
    scanf("%d",&nombre);
    for (int i = 10 ; i > 0 ; i--){
        mul = nombre * i ;
        printf("%d * %d = %d\n",nombre,i,mul);
    }

    return 0;
}