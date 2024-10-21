//take 3 no. inputs and tell if they can be the sides of a triangle (21/05/24)
#include<stdio.h>
int main (){
    int x,y,z;
    printf("enter 1st side : ");
    scanf("%d",&x);
    printf("enter 2nd side : ");
    scanf("%d",&y);
    printf("enter 3rd side : ");
    scanf("%d",&z);
    if((x+y)>z&&(y+z)>x&&(z+x)>y){
        printf("these 3 no. form a triangle");
    }
    else{
        printf("these 3 no. can't form a triangle");
    }
return 0;
}

