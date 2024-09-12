#include <stdio.h>
#include <stdbool.h>

int main() {

    // Affichage des Nombres Premiers
    int n;
    printf("Entrez un nombre entier  : ");
    scanf("%d", &n);

    printf("Nombres premiers de 1 a %d est :\n", n);
    for (int i = 2; i <= n; i++) {
        int premier = 0; 
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                premier = 1; 
                break;
            }
        }
        if ( premier == 0 ) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
