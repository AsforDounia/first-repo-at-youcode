#include<stdio.h>


int main(){
    //  Rechercher un Élément
    
    int  n ,elem_rech , present = 0 ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);
    int table[n];
    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }


    printf("Entrez l'element a rechercher : ");
    scanf("%d",&elem_rech);
    for( int i = 0 ; i < n ; i++ ){
        if ( elem_rech == table[i]){
            present = i + 1 ;
        }
    }
    if ( present != 0 ){
        printf("L'element %d est present dans case %d ",elem_rech,present);
    }
    else{
        printf("L'element %d n'est pas present dans ce tableau",elem_rech);
    }

    return 0;
}