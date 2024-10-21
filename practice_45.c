// print the no. of ways so that the person reaches nth stair using single and double step
#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int total = stair(n-1)+stair(n-2);
    return total;
}
int main(){
    int n;
    printf("enter the no. : ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
return 0;
}
