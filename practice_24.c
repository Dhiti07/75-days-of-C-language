//print the no. square (25/05/24)
#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=4;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}
