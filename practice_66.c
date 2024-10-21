//print the transpose of a matrix whose no. of rows and columns are equal
#include<stdio.h>
void swap(int x[100][100], int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp;
            x[i][j]=temp;
            x[i][j]=x[j][i];
            x[j][i]= temp;
        }
        printf("\n");
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",x[i][j]);
        }
        printf("\n");
     }

}
int main(){
    int n;
    printf("enter the no. of rows& columns: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter the elements: ");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    swap(arr,n);
return 0;
}
