//WAP to check if a given no. is prime or not
#include<stdio.h>
int main (){
    int a,n;
    printf("enter a number to be checked: ");
    scanf("%d",&n);
    a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("the given no. is prime");
    }
    else{
        printf("the given no. is composite");
    }
return 0;
}
