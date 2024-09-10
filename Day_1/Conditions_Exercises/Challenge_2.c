#include <stdio.h>

int main() {
    // Voyelle ou Non
    char c;
    printf("Enterz un caractère  ");
    scanf("%c",&c);
    switch (c) {
        case 'a' : 
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' : 
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :
        case 'y' :
        case 'Y' :
            printf("%c est un Voyelle",c);
            break;
        default :
            printf("%c n'est pas un Voyelle ",c);
    }

    return 0;
}