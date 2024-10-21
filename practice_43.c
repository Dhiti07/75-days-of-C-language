// print a to the power b using recursion
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int ans = a*power(a,b-1);
    return ans;
}
int main(){
    int a,b;
    printf("enter the values of a: ");
    scanf("%d",&a);
    printf("enter the values of b: ");
    scanf("%d",&b);
    int total = power(a,b);
    printf("%d",total);
return 0;
}
