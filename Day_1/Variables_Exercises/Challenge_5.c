#include <stdio.h>
// Affichage Température
int main()
{

    int C;
    printf("entrez la température en Celsius : ");
    scanf("%d",&C);
    if(C<0){
        printf("l'état de l'eau est  : Solide");
    }
    else if(C<100){
        printf("l'état de l'eau est  : Liquide");
    }
    else {
        printf("l'état de l'eau est  : Gaz");
    }
    
    return 0;
}
