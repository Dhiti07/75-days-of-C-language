//print hollow rectangle
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n) printf("*");
            if(j==1||j==n) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
return 0;
}
