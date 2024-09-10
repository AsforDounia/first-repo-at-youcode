#include <stdio.h>
// la température en Kelvin
int main()
{
   
    float temperature;
    
    printf("entrez la température en Celsius : ");
    scanf("%f",&temperature);
    
    temperature += 273.15 ;

    printf("La temperature en Kelvin est : %.2f", temperature);
    
    return 0;
}