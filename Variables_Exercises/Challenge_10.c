#include <math.h>
#include <stdio.h>

int main()
{
// Volume d'une sphère
// Volume = (4/3) * π * r³
    float r,v;
    const float pi = 3.14;
    
    printf("entrez le rayon de la sphère  : ");
    scanf("%f",&r);
    
    v = ((float)4/3) * pi * pow(r,3) ;
    printf("Volume = %f\n", v);

    return 0;
}