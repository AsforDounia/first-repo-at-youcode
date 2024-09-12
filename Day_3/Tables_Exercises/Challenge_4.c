#include<stdio.h>


int main(){
    //  Trouver le Maximum
    int  n , table[100] , max = 0  ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
        if( table[i] > max ){
            max = table[i] ;
        }
    }
    
    printf("La Maximum est : %d", max);
    return 0;
}