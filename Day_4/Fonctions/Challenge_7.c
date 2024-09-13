#include <stdio.h>
#include <string.h>
// Fonction d'Inversion de Chaine
void inverse(char chaine[], char inver[]) {
    int length = strlen(chaine);
    int i, j = 0;

    for (i = length - 1; i >= 0; i--) {
        inver[j++] = chaine[i];
    }
    inver[j] = '\0';
}

int main() {
    char chaine[100];
    char inver[100];

    printf("Entrez une chaine de caractere : ");
    scanf("%s", chaine);
    
    inverse(chaine, inver);

    printf("Chaine de caractere apres inversion = %s\n", inver);

    return 0;
}
