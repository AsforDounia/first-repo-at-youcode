#include<stdio.h>


int main(){
    //  Copie d'un Tableau
    int  n , tab2[100] , tab1[100] ;
    printf("Entrez le nombre de cases dans votre tableau : ");
    scanf("%d",&n);

    // Remplir le tableau
    for( int i = 0 ; i < n ; i++ ){
        printf("Entrez la valeur de case %d : ", i+1);
        scanf("%d",&tab1[i]);
    }
    int j = 0 ;
    for( int i = 0 ; i < n ; i++ ){
            tab2[j]=tab1[i] ;
            j++ ;
        }
    

    // Afficher les valeurs du tableau
    printf("Les valeur de tableau 1 est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d \n", tab1[i]);
    }
    printf("Les valeur de tableau 2 est : \n");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d \n", tab2[i]);
    }

    return 0;
}