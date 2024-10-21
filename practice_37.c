//swap 2 no. without using a 3rd variable
#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st no. : ");
    scanf("%d",&a);
    printf("enter 2nd no. : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("the value of 1st no. is %d\n",a);
    printf("the value of 2nd no. is %d\n",b);
return 0;
}
