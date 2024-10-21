//given 3 points (x1,y1),(x2,y2)and (x3,y3) WAP to check if all the 3 points fall on one straight line (21/05/24)
#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    float m1,m2;
    printf("enter 1st coordinates:  \n");
    scanf("%d%d",&x1,&y1);
    printf("enter 2nd coordinates:  \n");
    scanf("%d%d",&x2,&y2);
    printf("enter 3rd coordinates:  \n");
    scanf("%d%d",&x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2){
        printf("all the 3 coordinates lie on a straight line");
    }
    else{
        printf("all the 3 coordinates do not lie on the straight line");
    }
return 0;
}
