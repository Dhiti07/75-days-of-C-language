//take input from user to print a 2d array and print it
#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("enter no. of columns: ");
    scanf("%d",&c);
    printf("enter no. of rows: ");
    scanf("%d",&r);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum+ arr[i][j];
        }
    }
    printf("the sum of the array is: %d",sum);
return 0;
}
