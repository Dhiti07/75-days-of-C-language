//display this AP - 1,3,5,7,9.... upto n terms
#include<stdio.h>
int main(){
    int n,d;
    d=2;
    printf("enter the no. of terms of an AP: ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
return 0;
}

