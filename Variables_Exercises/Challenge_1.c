#include <stdio.h>
// nom, prénom, âge, sexe, et adresse email
int main()
{
    int age;
    char nom[25], prenom[25], sexe[10], adresse[150], email[50];

    printf("entrez votre nom : ");
    scanf("%s",nom); 
    printf("entrez votre prenom : ");
    scanf("%s",prenom);
    printf("entrez votre age : ");
    scanf("%d",&age);
    printf("entrez votre sexe : ");
    scanf("%s",sexe);
    printf("entrez votre adresse : ");
    scanf("%s",adresse);
    printf("entrez votre email : ");
    scanf("%s",email);
    printf("vos informations personnelles est : \n");
    printf("Nom : %s\nPrenom : %s\nAge : %d\nAdresse : %s\nemail : %s\n ", nom, prenom, age, adresse, email);

    
    return 0;
}
