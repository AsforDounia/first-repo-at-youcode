// C program for the above approach 
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 




// Driver Code 
int main() 
{ 

	int N ; 
	int i = 0; 


	srand(time(NULL)); 

	char generateur[62] = "0123456789abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX";

    printf("Entrez le size de votre mot de passe : ");
    scanf("%d",&N);
	char password[N]; 


	for (i = 0; i < N; i++) { 

        password[i] = generateur[rand() % (sizeof(generateur) - 1)]; 

	} 

    password[N] = '\0';
    printf("%s", password); 

	return 0; 
}
