// print floyd's triangle
#include<stdio.h>
int main(){
    int n;
    printf("enter the no. :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int x;
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}

