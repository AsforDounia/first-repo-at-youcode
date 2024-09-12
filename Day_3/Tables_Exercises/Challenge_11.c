#include<stdio.h>


int main(){
    //  Remplacer un element

    int  n ,elem_remp ,table[100] , nouvelle_valeur ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);
    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&table[i]);
    }


    printf("Entrez l'element a remplacer : ");
    scanf("%d",&elem_remp);
    printf("Entrez la nouvelle valeur : ");
    scanf("%d",&nouvelle_valeur);

    for( int i = 0 ; i < n ; i++ ){
        if ( table[i] == elem_remp ){
            table[i] = nouvelle_valeur  ;
        }
    }
    // Afficher les valeurs du tableau
    printf("Les valeur de votre nouvelle tableau est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d \n", table[i]);
    }

    return 0;
}