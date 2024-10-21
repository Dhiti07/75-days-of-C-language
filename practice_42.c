// print sum of 1 to n using return type
#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int ans = n+sum(n-1);
    return ans;
}
int main(){
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    int total = sum(n);
    printf("%d",total);
return 0;
}
