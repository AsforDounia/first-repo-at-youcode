// Fonction de Vérification de Parité
#include <stdio.h>

int n ;
int pair(int n) {
    if ( n % 2 == 0 )  return 1;
    else  return 0;
}
int main() {
    
    printf("Entrez un nombre entier : ");
    scanf("%d",&n);
    if( pair(n) )
        printf("Votre nombre %d est pair ",n);
    else 
        printf("Votre nombre %d est impair ",n);

}