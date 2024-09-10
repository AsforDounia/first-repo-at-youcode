#include <stdio.h>


int main(){
    
    float a, b, c ;

    printf("Les sclaires de l'equation de 2eme degre : \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

	if(a == 0) {
		if(b == 0) {
			if(c == 0) 
				printf("\n\nToutes les nombres sont des solutions");
			else 
				printf("\n\nImpossible !! ");
		}
		else {
			if(c == 0) 
				printf("\n\nx = 0");
			else
				printf("\n\nune solution : x = -c/b = %f", (-c/b) );	
		}
	}
	else {
		if(b == 0) {
			if(c == 0) 
				printf("\n\nx = 0");
			else {
				if((-c/a) > 0)
					printf("\n\nLa solution : x = -c/a = %f ", sqrt((-c/a)) );
				else
					printf("\n\nImpossible !! ");
			}
		}
		else {
			float Delta = b * b -4 * a * c ;
			if( Delta > 0 ) 
				printf("\n\nL'equation admet deux solutions x1 = %f et x2 = %f", ((-b + sqrt(Delta)) / 2*a), ((-b - sqrt(Delta)) / 2*a)   );
			else {
				if(Delta == 0)
					printf("\n\nL'equation admet une solution x =%f ", (-b / 2*a));
				else
					printf("\n\npas de solution ");
			}
					
		}
				
	}
			
    return 0;
}