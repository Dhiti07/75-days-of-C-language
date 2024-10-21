//find out the fractional part of the no. (20/05/24)
#include<stdio.h>
int main(){
float x;
printf("enter the decimal no.: ");
scanf("%f",&x);
int y;
y=x;
float z;
z= x-y;
printf("the fractional part of the decimal is : %f",z);
return 0;
}
