#include <stdio.h>

int main() {
    // Conversion d'Année
    int a, x, mois, j, h, s,min ;
    printf("Entrez le nombre d'année : ");
    scanf("%d",&a);
    x = 365;
    if(a % 4 == 0)
    {
        if( a % 100 == 0)
        {
            if ( a % 400 == 0){
                x = 366;
            }
        }
        else{
            x = 366;
        }
    }

    mois = a * 12 ;
    j = a * x ;
    h = j * 24 ;
    min = h * 60 ;
    s = min * 60 ;
    printf("%d Mois\n%d Jours\n%d Heures\n%d Minutes\n%d Secondes\n", mois, j, h, min, s);
    return 0;
}