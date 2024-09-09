#include <stdio.h>
int main()
{
// Calcul et affichage des résultats
// Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.

    float a,b,som,sub,mul,d;
    
    printf("entrez nombres a et b : ");
    scanf("%f%f",&a,&b);
    som = a+b ;
    sub = a-b ;
    mul = a*b ;
    d = a/b ;
    printf("a + b = %f\na - b = %f\na * b = %f\na / b = %f\n",som,sub,mul,d);
    return 0;
}