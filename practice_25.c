//print star triangle (25/05/24)
#include<stdio.h>
int main(){
    int row;
    printf("enter no. of rows: ");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}
