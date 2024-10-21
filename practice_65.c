//print the transpose of the matrix taking the input from the user
#include<stdio.h>
int main(){
    int r,c;
    printf("enter the no. of rows: ");
    scanf("%d",&r);
    printf("enter the no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the elements: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

return 0;
}
