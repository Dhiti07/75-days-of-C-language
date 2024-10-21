//find out the sum of digits of 3 digit no. (20/05/24)
#include<stdio.h>
int main(){
int a,b,c;
printf("enter 1st digit: ");
scanf("%d",&a);
printf("enter 2nd digit: ");
scanf("%d",&b);
printf("enter 3rd digit: ");
scanf("%d",&c);
int x;
x = a+b+c;
printf("3 digit no. is = %d%d%d\n",a,b,c);
printf("sum of digits of the no. is = %d",x);
return 0;
}
