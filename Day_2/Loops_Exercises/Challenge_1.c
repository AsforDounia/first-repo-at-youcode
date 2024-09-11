#include <stdio.h>
int main(){
    // Table de Multiplication
    int i , n ,m ;
    printf("Entrez un nombre : ");
    scanf("%d",&n);
    for (i = 1 ; i <= 10 ; i++ ){
        m = n * i ;
        printf("%d * %d = %d\n",n,i,m );
    }
}