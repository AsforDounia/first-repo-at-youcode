#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    // Jour de la Semaine

    int jours ,x ;
    char *noms_jours[]={"Lundi","Mardi", "Mercredi" ,"Jeudi" ,"Vendredi"  ,"Samedi","Dimanche"};
    srand(time(NULL));
    jours = rand() % 7 ;
    x = rand();
    printf("le jour  aleatoire est : %s",noms_jours[jours]);
    printf(" x : %d",x);
    return 0;
}