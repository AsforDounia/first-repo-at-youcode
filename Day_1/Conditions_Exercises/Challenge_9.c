#include <stdio.h>

int main() {
    // Vérification d'Alphabet
    char c ;
    printf("Entrez un caractère : ");
    scanf("%c",&c);
    if ( c >= 'a' && c <= 'z' ) {
        printf("Le caractère est un alphabet minuscule ");
    }
    else if ( c >= 'A' && c <= 'Z' ){
        printf("Le caractère est un alphabet majuscule ");
    }
    else {
        printf("Le caractère n'est pas un alphabet ");
    }
    return 0;
}