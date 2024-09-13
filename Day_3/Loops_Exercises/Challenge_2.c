#include <stdio.h>
#include <stdbool.h>

// 

int impair , n;

int main() {
    int n;

    // ====================================
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);

    
    for( int i=1 ; i<=n ; i++ ){
        impair = 0 ;
        if( n % 1 == 0 ){
            impair = 1 ;
        }

        for( int j=i ; j<=n ; j++ ){
            printf(" ");
        }
        if( impair == 1 ){
            for( int j=1 ; j<=(2*i-1) ; j++ ){
                printf("*");
            }   
        }
        for( int j=i ; j<=n ; j++ ){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

