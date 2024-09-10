
#include <stdio.h>

int main()
{
// Surface d'un rectangle
// Surface = longueur * largeur
    float longueur,largeur,Surface;
    
    
    printf("entrez la largeur  : ");
    scanf("%f",&largeur);
    printf("entrez la longueur  : ");
    scanf("%f",&longueur);
    Surface = longueur * largeur;
    printf("Surface = %f", Surface);

    return 0;
}