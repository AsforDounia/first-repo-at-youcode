#include <stdio.h>
    // Fonction de Fibonacci


int Fibonacci(int n){
    int f0 = 0 , f1 = 1 ,fx ;
    if(n == 0 ){
        return 0;
    }
    else if( n == 1 ){
        return 1 ;
    }

    else  {
        for( int i = 2 ; i <= n ; i++ ){
        fx = f0 + f1 ;
        f0 = f1 ;
        f1 = fx ;
        }
        return fx;
    }
}
int main() {
    int n ;
    printf("Entrez un nombre entier positif : ");
    scanf("%d",&n);
    printf("le Fibonacci de %d est : %d ", n ,Fibonacci (n));
    return 0;
}
