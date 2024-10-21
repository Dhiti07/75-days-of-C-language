//print the multiplication of 2 matrix using input from the user
#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("enter the no. of rows of 1st matrix: ");
    scanf("%d",&r1);
    printf("enter the no. of rows of 2nd matrix: ");
    scanf("%d",&r2);
    printf("enter the no. of columns of 1st matrix: ");
    scanf("%d",&c1);
    printf("enter the no. of columns of 2nd matrix: ");
    scanf("%d",&c2);
    //assuming user to give c1=r2 and hence resultant order would be res[r1][c2]
    int arr[r1][c1],brr[r2][c2],res[r1][c2];

return 0;
}
