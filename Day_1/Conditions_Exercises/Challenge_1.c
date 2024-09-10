#include <stdio.h>

int main() {
    // Paire ou Impaire
    int n;
    printf("Enterz un nombre ");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Votre nombre est Paire");
    }
    else {
        printf("Votre nombre est Impaire");
    }
    return 0;
}