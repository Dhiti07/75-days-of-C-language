//print no. 1 to n using recursion
#include<stdio.h>
void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("enter a no: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}