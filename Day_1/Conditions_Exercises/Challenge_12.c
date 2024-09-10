#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    // Jour de la Semaine

    int H1 ,M1 ,S1 ,H2 ,M2 ,S2 ;

    printf("Entrez Le premier instant au format HH:MM:SS : ");
    scanf("%d:%d:%d",&H1 ,&M1 ,&S1);
    printf("Entrez Le deuxième instant au format HH:MM:SS : ");
    scanf("%d:%d:%d",&H2 ,&M2 ,&S2);
    if ( H1 == H2 ){
        if ( M1 == M2 ){
            if ( S1 == S2 ){
                printf("Il s'agit du même instant");
            }
            else if(S1 < S2){
                printf("Le premier instant vient avant le deuxième");
            }
            else{
                printf("Le deuxième instant vient avant le premier ");
            }
        }
        else if(M1 < M2){
            printf("Le premier instant vient avant le deuxième");
        }
        else{
            printf("Le deuxième instant vient avant le premier ");
        }
    }
    else if(H1 < H2){
        printf("Le premier instant vient avant le deuxième");
    }
    else{
        printf("Le deuxième instant vient avant le premier ");
    }
    return 0;
}