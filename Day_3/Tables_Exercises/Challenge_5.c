#include<stdio.h>


int main(){
    //  Trouver le Minimum
    int  n , table[100] , min = 9999999  ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
        if( table[i] < min ){
            min = table[i] ;
        }
    }
    
    printf("Le Minimum est : %d", min);
    return 0;
}