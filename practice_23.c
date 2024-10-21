//2 no. are entered through the keyboard. WAP to find the value of one no. raised to the power of another.
#include<stdio.h>
int main(){
    int a,b,pow;
    printf("enter the no's. : ");
    scanf("%d %d",&a,&b);
    pow=1;
    for(int i=1;i<=b;i++){
        pow=a*pow;
    }
    printf("power = %d",pow);
return 0;
}
