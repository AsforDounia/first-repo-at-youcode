#include<stdio.h>

int main(){
    // pyramide d'étoile

    int n ;
    printf("Entrez le nombre des lignes : ");
    scanf("%d" ,&n );
    for (int i = 1 ; i <= n ; i++){
        for (int j = i ; j <= n ; j++){
            printf(" ");
        }
        for (int j = 1 ; j <= ( 2 * i - 1 ) ; j++){
            int premier = 0; 
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    premier = 1; 
                    break;
                }
            }
            if ( premier == 0 ) {
                printf("*");
            }
        }
        for (int j = i ; j <= n ; j++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}