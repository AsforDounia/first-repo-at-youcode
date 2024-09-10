#include <stdio.h>

int main()
{
    float Score;
    int   Anciennete , Recompenses ;
    printf("Entrez le Score de performance (de 0 a 100) : ");
    scanf("%f",&Score);
    printf("Entrez l'Anciennete (en annees) : ");
    scanf("%d",&Anciennete);
    printf("Recompenses recues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d",&Recompenses);

    if ( Score >= 90 && Anciennete >= 5 ){
        printf("Excellente");
    }
    else if( Score >= 75 && Anciennete >= 3 ){
        printf("Bonne");
    }
    if ( Score >= 50 && Anciennete < 3 ){
        printf("Satisfaisante");
    }
    else {
        printf("Insuffisante");
    }
    switch (Recompenses) {
        case 0 : 
            Score = Score ;
            break ;
        case 1 :
            Score = Score + Score * 0.1 ;
            break ;
        default : 
            Score = Score + Score * 0.2 ;
    }
    printf("\nVotre Score est : %f",Score);


    return 0;
}