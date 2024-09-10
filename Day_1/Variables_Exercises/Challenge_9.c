#include <math.h>
#include <stdio.h>

int main()
{
// la distance entre deux points dans un espace 3D
// Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)

    float x1,x2,y1,y2,z1,z2,dis;
    
    printf("entrez x1 : ");
    scanf("%f",&x1);
    printf("entrez y1 : ");
    scanf("%f",&y1);
    printf("entrez z1 : ");
    scanf("%f",&z1);
    
    printf("entrez x2 : ");
    scanf("%f",&x2);
    printf("entrez y2 : ");
    scanf("%f",&y2);
    printf("entrez z2 : ");
    
    scanf("%f",&z2);
    dis = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    printf(" la distance = %f",dis);
    return 0;
}