#include <stdio.h>

int main() {
    // Formatage de la Date
    int j ,m ,a ;
    char *nomsMois[]={"","Janvier", "Février" ,"Mars" ,"Avril"  ,"mai","juin" ,"juillet" ,"août" ,"septembre" ,"octobre","novembre","décembre"};
    printf("Entrez une date au format jj/mm/aa : ");
    scanf("%d/%d/%d",&j ,&m ,&a );
    printf("%d-%s-%d",j,nomsMois[m],a);
    return 0;
}