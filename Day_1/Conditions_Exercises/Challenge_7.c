#include <stdio.h>

int main() {
    // Alphabet Majuscule
    char c ;
        printf("Entrez un caractère : ");
        scanf("%c",&c);
        if ( c >= 65 && c <= 90 ) {
            printf("L'alphabet est majuscule ");
        }
        else{
            printf("L'alphabet est minuscule ");
        }

    return 0;
}