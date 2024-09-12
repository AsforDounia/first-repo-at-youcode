#include<stdio.h>
int main () {
    // Facteurs d'un Nombre
    int n , i ,x  ;
    printf("Entrez un nombre  : ");
    scanf("%d",&n);
    for (i = n ; i >= 1 ; i-- ){
        if( n % i == 0 ){
            x = n / i ;
            printf("%d ===> ",x);
        }

    }
    return 0;
}