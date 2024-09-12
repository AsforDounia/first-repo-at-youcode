#include<stdio.h>


int main(){
    //  Tri par Bulles
    int  n , table[100] , temp ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }
    
    for( int i = 0 ; i < n ; i++ ){
        for ( int  j = 0 ; j < n-i-1 ; j++ ){
            if( table[j] > table[j+1] ){
                temp = table[j] ;
                table[j] = table[j+1] ;
                table[j+1] = temp ;
            }

        }
    }

    // Afficher les valeurs du tableau
    printf("Les valeur de votre tableau apres le tr est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d \n", table[i]);
    }

    return 0;
}