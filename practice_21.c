//print the factorial of a given number n
#include<stdio.h>
int main(){
    int n,fact;
    printf("enter the no. : ");
    scanf("%d",&n);
    fact=1;
    for(n=n;n>0;n=n-1){
        fact=fact*n;
    }
    printf("factorial of the given no. is: %d",fact);
return 0;
}
