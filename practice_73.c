//printing a 2d array using pointers
#include<stdio.h>
void printarray(int arr[][100], int m, int n){
printf("printing all the elements of the array\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",*(*(arr+i)+j));
    }
    printf("\n");
}
}
int main(){
int m,n,arr[100][100];
printf("enter the no. of rows: ");
scanf("%d",&m);
printf("enter the no. of columns: ");
scanf("%d",&n);
printf("enter all the elements of the array: \n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}
printarray(arr,m,n);
return 0;
}
