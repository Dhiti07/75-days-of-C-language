//take 3 +ve integers input and print the greatest of them.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st no. : ");
    scanf("%d",&a);
    printf("enter 2nd no. : ");
    scanf("%d",&b);
    printf("enter 3rd no. : ");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("greatest no. is a");
    if(b>a&&b>c){
       printf("greatest no. is b");
       }}
    else{
        printf("greatest no. is c");
    }
return 0;
}

