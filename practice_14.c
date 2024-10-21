//display this GP - 1,2,4,8,16,32,... upto n terms
#include<stdio.h>
int main() {
    int n,i,a;
    printf("enter no. of terms of the GP: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
return 0;
}
