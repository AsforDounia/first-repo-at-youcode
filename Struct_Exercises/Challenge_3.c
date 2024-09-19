#include<stdio.h>



float air_rectangle(float largeur ,float longueur){
    return largeur * longueur ;
} 

int main(){
    typedef struct {
        float largeur , longueur ;
    }rectangle;
    rectangle rectangle1 ;
    printf("Entrez la largeur : ");
    scanf("%f",&rectangle1.largeur);
    printf("Entrez la longueur : ");
    scanf("%f",&rectangle1.longueur);
    printf("L'air de votre rectangle est : %f",air_rectangle(rectangle1.largeur,rectangle1.longueur));
    return 0;
    
}
