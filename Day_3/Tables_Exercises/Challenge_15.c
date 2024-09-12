#include<stdio.h>


int main(){
    //   Fusion de Deux Tableaux
    int  m , n ;
    printf("Entrez le nombre de cases de premier tableau : ");
    scanf("%d",&n);
    printf("Entrez le nombre de cases de deuxieme tableau : ");
    scanf("%d",&m);
    
    int tab2[m] , tab1[n] , tab3[n+m] ;


    // Remplir le premier tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&tab1[i]);
    }


    // Remplir le deuxieme tableau
    for( int i = 0 ; i < m ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&tab2[i]);
    }

    // Fusion les Deux Tableaux
    for( int i = 0 ; i < n ; i++ ){
        tab3[i] = tab1[i] ;
    }


    for( int i = 0 ; i < n + m   ; i++ ){
        tab3[n] = tab2[i] ;
        n++ ;
    }

    
    // Afficher les valeurs du tableau
    printf("Les valeur de tableau est : \n");
    for( int i = 0 ; i < n + m  ; i++ ){
        printf("%d \n", tab3[i]);
    }


    return 0;
}