#include<stdio.h>



int main(){
    typedef struct {
        char nom[50];
        float prix ;
        int quantite ;
    }produit;

int n ;
printf("Entrez le nombre des elements : ");
scanf("%d",&n);
produit table_preduit[n];

for( int i = 0 ; i < n ; i++ ){
    printf("Entrez le nom de produit %d : ", i+1);
    scanf("%s",table_preduit[i].nom);
    printf("Entrez le prix de produit %d : ", i+1);
    scanf("%f",&table_preduit[i].prix);    
    printf("Entrez la quantité de produit %d : ", i+1);
    scanf("%d",&table_preduit[i].quantite);
}

for( int i = 0 ; i < n ; i++ ){
    printf("les info de produit %d est : \n", i+1);
    printf("Nom : %s \n",table_preduit[i].nom);
    printf("Prix : %f \n",table_preduit[i].prix);   
    printf("Quantite : %d \n",table_preduit[i].quantite);
} 

}