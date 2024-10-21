//WAP to print sum of digits of a given no.
#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the no.: ");
    scanf("%d",&n);
    sum = 0;
    for(n=n;n>0;n=n/10){
        sum = sum+n%10;
    }
    printf("the sum of digits of the given no. is : %d",sum);
return 0;
}
