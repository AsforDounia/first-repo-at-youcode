#include <math.h>
#include <stdio.h>

int main()
{
// Calcul de la moyenne géométrique
// Moyenne géométrique = (a * b * c)^(1/3)

    float moy,a,b,c;
    
    printf("entrez a : ");
    scanf("%f",&a);
    printf("entrez b : ");
    scanf("%f",&b);
    printf("entrez c : ");
    scanf("%f",&c);
    moy = cbrt(a * b * c);
    printf("Moyenne géométrique = %f",moy);
    return 0;
}