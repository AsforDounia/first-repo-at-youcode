#include <stdio.h>

int main()
{
    // Affichage de la Suite de Fibonacci

    int  i , n , f0 = 0 , f1 = 1 , fx;
    
    printf("Entrez un nombre entier  : ");
    scanf("%d",&n);
    for( i = 0 ; i <= n ; i++ ){
        if( n == 0 ){
            printf("f(%d) = %d",n ,f0);
        }
        else if( n == 1 ){
            printf("f(%d) = %d",n ,f1);
            break ;
        }
        else {
            fx = f0 + f1 ;
            f0 = f1 ;
            f1 = fx ;
        }

    }
    if( n != 0 && n != 1 ) {
        printf("f(%d) = %d",n,fx);
    }
    return 0;
}