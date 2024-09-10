#include<stdio.h>
#include<math.h>
int main()
{
    // Point sur un Segment
    int x1,y1,x2,y2,x,y,dis1,dis2,dis;

    printf("Entrez les coordonnées de point 1 du segment x y ");
    scanf("%d%d",&x1,&y1);
    printf("Entrez les coordonnées de point 2 du segment");
    scanf("%d%d",&x2,&y2);
    printf("Entrez les coordonnées de votre point ");
    scanf("%d%d",&x,&y);
    dis = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    dis1 = sqrt(pow((x-x1),2)+pow((y-y1),2));
    dis2 = sqrt(pow((x-x2),2)+pow((y-y2),2));
    if ( (dis1 + dis2) == dis ){
        printf("Votre point se trouve sur le segment");
    }
    else {
        printf("Votre point n'exist pas sur le segment");
    }
    return 0;
}
