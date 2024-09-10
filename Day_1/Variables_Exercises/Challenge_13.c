#include <stdio.h>

int main()
{
// Affichage des valeurs binaire et hexadécimale équivalentes

    int  BinNum[32],n,i,j;
    
    printf("Entrez un nombre  ");
    scanf("%d",&n);
    printf("Votre nombre en hexadécimale est : %x\n",n);
    i=0;
    while(n>0){
        BinNum[i] = n % 2;
        n = n / 2;  
        i++;
    }
    printf("et votre nombre en binaire est : ");
    for(j=i-1 ;j>=0;j--){
        printf("%d",BinNum[j]);
    }

    return 0;
}