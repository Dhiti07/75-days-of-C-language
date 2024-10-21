//WAP to count digits of a given no.
#include<stdio.h>
int main(){
    int n,count;
    printf("enter the no. : ");
    scanf("%d",&n);
    count = 0;
    for(n=n;n>0;n=n/10){
        count++;
    }
    printf("the no. of digits of the given no. is: %d",count);
return 0;
}
