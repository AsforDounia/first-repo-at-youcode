#include <stdio.h>
// la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s)
int main()
{
   
    float vitesse;
    printf("entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%f",&vitesse);
    vitesse *= 0.27778 ;
    printf("votre vitesse en mètres par seconde (m/s) est  : %.f", vitesse);
    
    return 0;
}