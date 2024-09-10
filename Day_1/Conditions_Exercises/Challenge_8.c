#include <stdio.h>

int main() {
    // Mention Obtenue
    float moy ;
    printf("Entrez votre moyenne : ");
    scanf("%f",&moy);
    if ( moy >= 0 && moy <= 20 ){
        if( moy < 10 ) {
            printf("Votre mention est recalé");
        }
        else if ( moy >= 10 && moy < 12 ) { 
            printf("Votre mention est passable");
        }
        else if ( moy >= 12 && moy < 14 ) { 
            printf("Votre mention est assez bien");
        }
        else if ( moy >= 14 && moy < 16 ) { 
            printf("Votre mention est bien");
        }
        else { 
            printf("Votre mention est très bien");
        }
    }
    else {
        printf("Votre moyenne invalide");
    }
    return 0;
}