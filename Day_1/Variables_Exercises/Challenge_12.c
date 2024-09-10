#include <stdio.h>

int main()
{
    // Nombre entier à quatre chiffres en ordre inverse
    int  numbre,num1,num2,num3,num4;
    
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d",&numbre);
    
    num1 = numbre % 10 ;
    num2 = (numbre / 10) % 10 ;
    num3 = (numbre / 100) % 10 ;
    num4 = numbre / 1000 ;
    
    printf("l'inverse de votre nombre est : %d%d%d%d",num1,num2,num3,num4);

    return 0;
}