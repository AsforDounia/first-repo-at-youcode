#include<stdio.h>
#include<math.h>

int main() {
    const float pi = 3.14 ;
    float air_cercle;

    typedef struct {
        float rayon ;
    }Cercle;
    Cercle Cercle1 ;
    printf("Entrez le rayon de votre cercle : ");
    scanf("%f",&Cercle1.rayon);
    air_cercle = pi * pow(Cercle1.rayon,2);
    printf("l'air de votre cercle est : %f ",air_cercle);
    return 0 ;
}