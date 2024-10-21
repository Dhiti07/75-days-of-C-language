//print the sum of the given nxm matrix
#include<stdio.h>
int main(){
    int r,c,sum=0;
    int arr[r][c];
    printf("enter no. of columns: ");
    scanf("%d",&c);
    printf("enter no. of rows: ");
    scanf("%d",&r);
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
                printf("enter the element: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){

        }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){

            sum = sum+arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of the matrix: %d",sum);
return 0;
}
