#include <stdio.h>
// la distance en yards
int main()
{
   
    float distance;
    
    printf("entrez la distance en kilomètres : ");
    scanf("%f",&distance);
    distance *= 1093.61 ;

    printf("La temperature en Kelvin est : %.2f", distance);
    
    return 0;
}