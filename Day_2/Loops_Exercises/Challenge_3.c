#include <stdio.h>
int main(){
    // Somme des N Nombres
    int i , n ,s = 0 ;
    printf("Entrez un nombre entier : ");
    scanf("%d",&n);
    for (i = 1 ; i <= n ; i++ ){
        s = s + i ;
    }
    printf("%d",s );

}