//WAP to print reverse of a given no.
#include<stdio.h>
int main(){
    int rev,n,last;
    printf("enter the no. : ");
    scanf("%d",&n);
    rev=0;
    for(n=n;n>0;n=n/10){
        last = n%10;
        rev = rev*10+last;
    }
    printf("reverse of the no. is: %d",rev);
return 0;
}
