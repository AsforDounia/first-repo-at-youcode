#include<stdio.h>


int main(){
    //  Recherche Dichotomique
    
    int  n ,elem_rech ,temp , present = 0 ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);
    int table[n] ;
    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }
    // =====================
    for( int i = 0 ; i < n ; i++ ){
    for ( int  j = 0 ; j < n-i-1 ; j++ ){
        if( table[j] > table[j+1] ){
            temp = table[j] ;
            table[j] = table[j+1] ;
            table[j+1] = temp ;
        }
    }
    }

    // =========================
    printf("Entrez l'element a rechercher : ");
    scanf("%d",&elem_rech);

    // =========================
    printf("Les valeur de votre tableau apres le trie est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("case %d : %d \n", i+1 , table[i]);
    }

    // =========================
    if(elem_rech == table[n/2]){
        printf("L'element %d sur est sur la case %d ",elem_rech,n/2+1);
    }
    else if( elem_rech > table[n/2] ){
        for( int i = n/2 ; i < n ; i++ ){
            if ( elem_rech == table[i]){
                printf("L'element %d est sur la case %d ",elem_rech,i+1);
            }
        }
    }
    else{
        for( int i = 0 ; i <= n / 2 ; i++ ){
            if ( elem_rech == table[i]){
                i++;
                printf("L'element %d est sur la case %d ",elem_rech,i);
            }
        }
    }

    return 0;
}