#include <stdio.h>
int main()
{
// Moyenne pondérée de trois nombres
    
    float num1,num2,num3,m;
    
    printf("entrez le premier nombre : ");
    scanf("%f",&num1);
    printf("entrez le deuxieme nombre : ");
    scanf("%f",&num2);
    printf("entrez le troisieme nombre : ");
    scanf("%f",&num3);
    
    m = ( (num1 * 2) + (num2 * 3) + (num3 * 5) ) / (2 + 3 + 5);
    printf("La moyenne pondérée est : %f",m);
    
    return 0;
}