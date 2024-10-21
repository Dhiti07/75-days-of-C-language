//find the max element in the 2D array and print its index as well
#include<stdio.h>
int main(){
    int arr[3][3]= {(1,1,3),(4,5,6),(7,8,9)};
    int max = -1,i,j;
    for(i =0;i<3;i++){
        for(j =0;j<3;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
 printf("%d is the max element in the array and index is %d %d",max,i,j);
return 0;
}
